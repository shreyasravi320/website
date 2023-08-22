import { useEffect, useState, useRef } from 'react'
import Layout from '../../components/layouts/child';
import { Container, Box, useColorModeValue, Center } from '@chakra-ui/react'
import React from 'react'
import initSync, { State } from '../../public/wasm/pixcell_lib'

import ImageSVG from "../../public/imgs/img_icon.svg"

const MAX_PIXELS = 16384

const Grid = (pixels, rows, cols, width, height, bg) => {
    const canvasRef = useRef(null);
    const pixelSize = Math.min(Math.max(1, height < width ? Math.floor(0.85 * height / rows) : Math.floor(0.85 * width / cols)), 5);

    useEffect(() => {
        async () => {
            if (pixels) {
                const canvas = canvasRef.current;
                const ctx = canvas.getContext('2d');

                canvas.width = cols * pixelSize;
                canvas.height = rows * pixelSize;

                for (let row = 0; row < rows; row++) {
                    for (let col = 0; col < cols; col++) {
                        const pixelValue = pixels[row * cols + col];

                        if (pixelValue == 0x1000000) {
                            ctx.fillStyle = bg;
                        } else {
                            const r = (pixelValue & 0xff0000) >> 16;
                            const g = (pixelValue & 0x00ff00) >> 8;
                            const b = pixelValue & 0x0000ff;

                            ctx.fillStyle = `rgb(${r},${g},${b})`;
                        }
                        ctx.fillRect(col * pixelSize, row * pixelSize, pixelSize, pixelSize);
                    }
                }
            }
        }
    }, [pixels, rows, cols, bg, pixelSize]);

    return <canvas ref={canvasRef} width="auto" height="100%"></canvas>;
}

const Sim = () => {
    const [state, setState] = useState(null)
    const [pixels, setPixels] = useState(null)
    const [rows, setRows] = useState(0)
    const [cols, setCols] = useState(0)
    const containerRef = useRef(null);
    const [height, setHeight] = useState(0)
    const [width, setWidth] = useState(0)

    useEffect(() => {
        async () => {
            await initSync();
        }
    }, [])

    const processImageUpload = async (event) => {
        const file = event.target.files[0];
        if (file) {
            const img = new Image();
            img.src = URL.createObjectURL(file);

            img.onload = async () => {
                const canvas = document.createElement('canvas');
                const ctx = canvas.getContext('2d');
                const ratio = Math.sqrt(MAX_PIXELS / (img.width * img.height));

                canvas.width = img.width * ratio;
                canvas.height = img.height * ratio;

                ctx.drawImage(img, 0, 0, canvas.width, canvas.height);
                const rgbaBuffer = ctx.getImageData(0, 0, canvas.width, canvas.height).data;
                const rgbBuffer = new Uint8Array(rgbaBuffer.length - rgbaBuffer.length / 4);

                let j = 0;
                for (let i = 0; i < rgbaBuffer.length; i++) {
                    if (i % 4 !== 3) {
                        rgbBuffer[j] = rgbaBuffer[i];
                        j++;
                    }
                }

                setRows(canvas.height);
                setCols(canvas.width);
                setState(State.new(canvas.height, canvas.width, rgbBuffer));
            }
        }
    }

    useEffect(() => {
        setHeight(window.innerHeight - document.querySelector('.pixcell').getBoundingClientRect().top - window.scrollY)
        setWidth(window.innerWidth - document.querySelector('.pixcell').getBoundingClientRect().left - window.scrollX)
    }, [])

    useEffect(() => {
        const timer = setTimeout(async () => {
            if (state) {
                await state.update();
                setPixels(await state.get_pixels());
            }
        });
        return () => clearTimeout(timer);
    }, [state, pixels, rows, cols]);

    return (
        <Container className="pixcell" ref={containerRef} maxW="container.md">
            <Center
                className="img-input"
                style={{
                    display: "block",
                    border: "2px dashed #afafaf",
                    borderRadius: 12,
                    position: "relative",
                    padding: "10%",
                }}
            >
                <Center display="grid">
                    <Center>
                        <ImageSVG fill={useColorModeValue('black', 'white')} width="30%" height="30%"/>
                    </Center>
                    Drag and drop or Click to upload your image
                </Center>
                <input
                    style={{
                        opacity: 0,
                        position: "absolute",
                        top: 0,
                        left: 0,
                        width: "100%",
                        height: "100%",
                        cursor: "pointer",
                    }}
                    type="file"
                    accept="image/*"
                    onChange={processImageUpload}
                >
                </input>
            </Center>
            <Center mt={6}>
                {Grid(pixels, rows, cols, width, height, useColorModeValue('white', 'black'))}
            </Center>
        </Container>
    )
}

const PixCell = () =>
{
    useEffect(() => {
        window.scrollTo(0, 0);
    })

    return (
        <Layout>
            <Container maxW="container.md">
                <Box display={{md:"flex"}} mt={6}>
                    <Sim/>
                </Box>
            </Container>
        </Layout>
    )
}

export default PixCell
