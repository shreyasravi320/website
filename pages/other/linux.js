import {
    Heading,
    Container,
    Box,
    Button,
    Center,
    useColorModeValue
} from "@chakra-ui/react"
import NextLink from "next/link"
import Image from "next/image"
import Section from "../../components/section"
import Latex from "react-latex"
import theme from "../../lib/theme"
import Layout from "../../components/layouts/child"

import LinuxPNG from "../../public/imgs/linux.png"

const Linux = () => {
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{ md: "flex" }} mt={6}>
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="other-work-gradient-text">
                                Linux
                            </div>
                        </Heading>
                        <Section delay={0.2}>
                            <Box
                                mt={8}
                                mb={8}
                                mx="auto"
                                maxW={{ base: "100%", md: "100%", lg: "100%" }}
                            >
                                <Image src={LinuxPNG} layout="responsive" />
                                <figure style={{ textAlign: "center" }}>
                                    <i>
                                        <small>My home workspace</small>
                                    </i>
                                </figure>
                            </Box>
                            This is my current arch linux configuration. I use
                            i3 as a window manager and picom as my compositor.
                            The menu bars are made with polybar. The relevant
                            features are listed below.
                            <Heading as="h3" variant="section-title">
                                Top menu bar
                            </Heading>
                            <ul>
                                <li>
                                    A word-of-day puzzle, where the current word
                                    of the day is encrypted using a single rotor
                                    enigma. As this is impossible to decrypt
                                    without any other information, the
                                    Scrabble-score of the actual word is
                                    provided. Word shown in picture is
                                    <strong
                                        style={{
                                            color: useColorModeValue(
                                                "white",
                                                "black"
                                            )
                                        }}
                                    >
                                        {" "}
                                        benign{" "}
                                    </strong>
                                    (highlight to show).
                                </li>
                                <li>Each active workspace (up to 10)</li>
                                <li>Weather and temperature</li>
                                <li>Available package updates</li>
                                <li>
                                    Internal temperature, battery status, and
                                    language
                                </li>
                                <li>Date and time (toggles on click)</li>
                            </ul>
                            <Heading as="h3" variant="section-title">
                                Windows
                            </Heading>
                            <ul>
                                <li>
                                    Top-left window is a program I made in Rust
                                    that draws any image with fourier cycles
                                </li>
                                <li>Top-right window is a plain terminal</li>
                                <li>
                                    Bottom-left window is a ASCII bonsai tree
                                    grower I made in Rust that changes leaf
                                    color based on the current month and season
                                </li>
                                <li>Bottom-right window is Spotify</li>
                            </ul>
                            <Heading as="h3" variant="section-title">
                                Bottom menu bar
                            </Heading>
                            <ul>
                                <li>Current audio source</li>
                                <li>CPU, RAM, and disk usage</li>
                                <li>
                                    WiFi status (incoming and outgoing bytes
                                    shown)
                                </li>
                                <li>
                                    Volume (toggles mute on click) and
                                    brightness
                                </li>
                            </ul>
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Linux
