import { useEffect, useState, useRef } from 'react'
import Layout from '../../components/layouts/child';
import { Container, Box } from '@chakra-ui/react'
import React from 'react'
import initSync, { State } from '../../pixcell-lib/pkg/pixcell_lib'

const MAX_PIXELS = 16384

const Grid = (state, rows, cols) => {
    const canvasRef = useRef(null);

    useEffect(() => {
        if (state && rows !== 0 && cols !== 0) {
            const canvas = canvasRef.current;
            const ctx = canvas.getContext('2d');

            const pixelSize = 4;

            canvas.width = cols * pixelSize;
            canvas.height = rows * pixelSize;

            for (let row = 0; row < rows; row++) {
                for (let col = 0; col < cols; col++) {
                    const pixelValue = state.get_color(row, col);

                    const r = (pixelValue & 0xff0000) >> 16;
                    const g = (pixelValue & 0x00ff00) >> 8;
                    const b = pixelValue & 0x0000ff;
                    ctx.fillStyle = `rgb(${r},${g},${b})`;
                    ctx.fillRect(col * pixelSize, row * pixelSize, pixelSize, pixelSize);
                }
            }
        }
    }, [state]);

    return <canvas ref={canvasRef} width={cols * 2} height={rows * 2}></canvas>;
}

const Sim = () => {
    const [state, setState] = useState(null)
    const [rows, setRows] = useState(0)
    const [cols, setCols] = useState(0)

    useEffect(async () => {
        await initSync();
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
                setState(State.new(canvas.height, canvas.width, rgbBuffer, 0x000000));
            }
        }
    }

    useEffect(() => {
        const timer = setTimeout(async () => {
            if (state) {
                console.log("Updated!\n");
                await state.update();
            }
        }, 500);
        return () => clearTimeout(timer);
    }, [state]);

    return (
        <div>
            <input type="file" accept="image/*" onChange={processImageUpload}/>
            {Grid(state, rows, cols)}
        </div>
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
