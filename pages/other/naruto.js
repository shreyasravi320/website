import { Heading, Container, Box, Button, Center, useColorModeValue } from '@chakra-ui/react'
import { YouTubeEmbed } from '@next/third-parties/google'
import NextLink from "next/link"
import Image from "next/image"
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'
import Layout from '../../components/layouts/child'

import ItachiWoodPNG from '../../public/imgs/itachi_wood.png'

const Naruto = () =>
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
                                Itachi Uchiha
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                            <YouTubeEmbed
                                videoid="YhjzKjJ6wzs"
                                params="controls=1"
                                style={{ width: '100%', aspectRatio: '16/9' }}
                            />
                    </Box>
                    My friend is a huge Naruto fan and his favorite character is Itachi, so I made this for his birthday. I traced an image of Itachi on the telephone pole in Illustrator and did it in 3 separate layers - the background, the moon and rooftops, and the telephone pole with Itachi on it. I laser cut each one of these out of plywood and painted them, then stacked them on top of each other to give the 3D effect.
                    <Box mt={8} mb={8} mx="auto" maxW={{ base: "80%", md: "60%", lg: "50%" }}>
                        <Image src={ItachiWoodPNG} layout="responsive"/>
                        <figure style={{textAlign: "center"}}><i><small>All wood cutouts stacked on each other</small></i></figure>
                    </Box>
                    Once all the parts were made, I cut out a hole in the back to attach a small stepper motor hooked up to a Raspberry Pi that would rotate the moon in the background. I also added red LEDs behind Itachi&apos;s eyes. Ideally, the wires for all the connections would be black to blend in with the telephone pole wires, but I didn&apos;t have access to a lot of black wires.
                </Section>
            </Container>
        </Layout>
    )
}

export default Naruto;
