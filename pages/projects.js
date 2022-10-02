import { Box, Container, Heading, SimpleGrid } from "@chakra-ui/react"
import Section from "../components/section"
import styled from "@emotion/styled"
import theme from "../lib/theme"
import { useEffect } from 'react'
import Layout from '../components/layouts/child'

import KnightGridItem from "../components/knightGridItem"
import IonGridItem from "../components/ionGridItem"
import SlangGridItem from "../components/slangGridItem"
import AllegroGridItem from "../components/allegroGridItem"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 18em;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const Projects = () => {
    useEffect(() => {
        window.scrollTo(0, 0)
    });

    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <GradientText>
                            <Heading variant="page-title">
                                Projects
                            </Heading>
                        </GradientText>
                    </Box>
                </Box>
                <br></br>

                <SimpleGrid columns={[1, 1, 2]} gap={"5vw"}>
                    <Section delay={0.2}>
                        <KnightGridItem textColor="#ff7878">
                            A solver that finds a cyclical path a knight can take on an arbitrarily-sized chessboard such that each square is touched exactly once.
                        </KnightGridItem>
                    </Section>
                    <Section delay={0.2}>
                        <SlangGridItem textColor="#ff8877">
                            A compiler for a custom programming language that offers easy to type Python-like syntax and runtime performance on par with C and C++.
                        </SlangGridItem>
                    </Section>
                    <Section delay={0.5}>
                        <IonGridItem textColor="#ff6c69">
                            A web-hosted chess engine that can find the optimal move in any given position in under 1.5 seconds by looking at least 12 moves in the future.
                        </IonGridItem>
                    </Section>
                    <Section delay={0.5}>
                        <AllegroGridItem textColor="#ff6181">
                            A 3D animation software that creates motion graphics with only a sentence as a given input, using natural language processing and machine-learning models.
                        </AllegroGridItem>
                    </Section>
                </SimpleGrid>

                <Box mt={6} align="center">
                    <Box flexGrow={1}>
                        <Section delay={0.8}>
                            Other projects can be found at my <a href="https://github.com/shreyasravi320" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>GitHub</a>
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Projects
