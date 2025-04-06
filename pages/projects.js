import {
    Box,
    Container,
    Heading,
    SimpleGrid,
    useColorModeValue
} from "@chakra-ui/react"
import Section from "../components/section"
import theme from "../lib/theme"
import Layout from "../components/layouts/child"
import { useState } from "react"

import PixcellSVG from "../public/imgs/pixcell.svg"
import KnightSVG from "../public/imgs/knight.svg"
import IonSVG from "../public/imgs/ion.svg"
import SlangSVG from "../public/imgs/slang.svg"

import { GridItem, GridItemTitle } from "../components/gridItem"

const Projects = () => {
    const [isAnyFocused, setIsAnyFocused] = useState(false)
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{ md: "flex" }} mt={6}>
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="projects-gradient-text">
                                Projects
                            </div>
                        </Heading>
                    </Box>
                </Box>
                <br></br>

                <SimpleGrid columns={[1, 1, 2]} gap={"4vw"}>
                    <Section delay={0.2}>
                        <GridItem
                            href="/projects/pixcell"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <PixcellSVG
                                fill={useColorModeValue("black", "white")}
                            />
                            <GridItemTitle textColor="#ff7878">
                                PixCell
                            </GridItemTitle>
                            An evolution simulation where pixels evolve over
                            time to mimic a target image&apos;s colors via
                            survival-oriented genome adaptation.
                        </GridItem>
                    </Section>
                    <Section delay={0.2}>
                        <GridItem
                            href="/projects/knight"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <KnightSVG
                                fill={useColorModeValue("black", "white")}
                            />
                            <GridItemTitle textColor="#ff8877">
                                KnightTour
                            </GridItemTitle>
                            A solver that finds a cyclical path a knight can
                            take on a chessboard of arbitrary size, touching
                            every square exactly once.
                        </GridItem>
                    </Section>
                    <Section delay={0.5}>
                        <GridItem
                            href="/projects/slang"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <SlangSVG
                                fill={useColorModeValue("black", "white")}
                            />
                            <GridItemTitle textColor="#ff6c69">
                                Slang
                            </GridItemTitle>
                            A compiler for a custom programming language that
                            offers easy to type Python-like syntax and runtime
                            performance on par with C and C++.
                        </GridItem>
                    </Section>
                    <Section delay={0.5}>
                        <GridItem
                            href="/projects/ion"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <IonSVG
                                fill={useColorModeValue("black", "white")}
                            />
                            <GridItemTitle textColor="#ff6181">
                                Ion
                            </GridItemTitle>
                            A web-hosted chess engine that can find the optimal
                            move in any given position in under 1.5 seconds by
                            looking at least 12 moves in the future.
                        </GridItem>
                    </Section>
                </SimpleGrid>

                <Box mt={6} align="center">
                    <Box flexGrow={1}>
                        <Section delay={0.8}>
                            Other projects can be found at my{" "}
                            <a
                                href="https://github.com/shreyasravi320"
                                target="_blank"
                                rel="noreferrer"
                                style={{
                                    color: theme.colors.linkBlue,
                                    textDecoration: "underline"
                                }}
                            >
                                GitHub
                            </a>
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Projects
