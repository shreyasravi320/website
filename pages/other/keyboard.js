import { Heading, Container, Box, Button, Center, useColorModeValue, SimpleGrid } from '@chakra-ui/react'
import NextLink from "next/link"
import Image from "next/image"
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'
import Layout from '../../components/layouts/child'

import KeyboardPNG from '../../public/imgs/keyboard.png'
import KeyboardWiringPNG from '../../public/imgs/keyboard_wiring.png'

const Keyboard = () =>
{
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading
                            variant="page-title"
                        >
                            <div className="other-work-gradient-text">
                                Keyboard
                            </div>
                        </Heading>

                        <Section delay={0.2}>
                            <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                <Image src={KeyboardPNG} layout="responsive"/>
                            </Box>

                            I made this keyboard after trying a bunch of other ones and realizing that standard keyboard layouts are not optimized for hand comfort. I started by measuring where my hands fall naturally placed keys accordingly to design the circuit board, also known as a PCB. 

                            <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                <Image src={KeyboardWiringPNG} layout="responsive"/>
                                <figure style={{textAlign: "center"}}><i><small>Wiring diagram for the PCB made in KiCad</small></i></figure>
                            </Box>

                            Once the PCB was made, I soldered all the parts on (key switches, microchips, etc.) and placed keycaps on the switches. After testing it for a bit, I realized that I needed a slight incline so that my fingers don&apos;t have to stretch to reach the top row keys. I then measured and modeled a case for the left and right side and had them 3D printed.
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Keyboard;
