import { Heading, Container, Box, Button, Center, useColorModeValue } from '@chakra-ui/react'
import NextLink from "next/link"
import Image from "next/image"
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'
import Layout from '../../components/layouts/child'

import KnightSVG from "../../public/imgs/knight.svg"
import KnightDiag from "../../public/imgs/knightDiag.png"
import KnightDiag2 from "../../public/imgs/knightDiag2.png"

const KnightTour = () =>
{
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading
                            variant="page-title"
                        >
                            <div className="projects-gradient-text">
                                KnightTour
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <KnightSVG fill={useColorModeValue("black", "white")}/>
                </Section>

                <Section delay={0.5}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Challenge
                    </Heading>
                    <link
                        href="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.9.0/katex.min.css"
                        rel="stylesheet"
                    />
                    <Latex>
                        On an arbitrary $n \times n$ chessboard, find a path that a knight can take to visit every square exactly once and return to the starting square.
                    </Latex>

                    <br/>
                    <br/>

                    <NextLink href="knight/solver/">
                        <Button
                            bg="linear-gradient(135deg, #ff7c20, #ff4093)"
                            color={useColorModeValue('white', 'black')}
                            _hover={{bg: "linear-gradient(135deg, #dd7c20, #dd4093)"}}
                            colorScheme="transparent"
                        >
                            Play with it here!
                        </Button>
                    </NextLink>
                </Section>
                <Section delay={0.8}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Solution
                    </Heading>
                    KnightTour is a solver for the closed <a href="https://en.wikipedia.org/wiki/Knight%27s_tour" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>knight&apos;s tour</a> problem: finding a path for the knight to touch every square on a chessboard exactly once and return back to start.
                    <br></br>
                    <br></br>
                    The knight&apos;s tour problem is a more specific version of the generalized problem of finding a <a href="https://en.wikipedia.org/wiki/Hamiltonian_path" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>Hamiltonian cycle</a> in a graph.
                    In simple terms, a Hamiltonian cycle is a path in a graph that touches every vertex exactly once and returns to the starting vertex.
                    In general, the <a href="https://en.wikipedia.org/wiki/Hamiltonian_path_problem" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>Hamiltonian path problem</a> is an <a href="https://en.wikipedia.org/wiki/NP-completeness" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>NP-complete</a> problem, meaning that it currently cannot be solved in polynomial time.

                    <br></br>
                    <br></br>

                    However, KnightTour takes advantage of properties of the knight&apos;s movement along a chessboard, and is able to solve complete tours in polynomial time.
                    KnightTour breaks up any board into a series of smaller and smaller boards, computes the knight&apos;s tour on each of these boards, and then merges the tours together.

                    <br></br>
                    <br></br>
                </Section>
                <Section delay={1.1}>
                    <Image src={KnightDiag} layout="responsive"/>
                    <figure style={{textAlign: "center"}}><i><small>KnightTour on a 12 x 12 board by generating four 6 x 6 tours and merging them</small></i></figure>
                    <br/>
                    <br/>

                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Why this works
                    </Heading>
                    <ol>
                        <li>We can solve tours relatively quickly for 6 by 6, 8 by 8, and 10 by 10 <i>square</i> boards, as well as 6 by 8, 8 by 10, and 10 by 12 <i>rectangular</i> boards.</li>
                        <li>Any even-sized board length greater than or equal to 12 can be divided into some arrangement of smaller solvable boards. I wrote a proof for this <a href="https://github.com/shreyasravi320/KnightTour/blob/main/KnightTour.pdf" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>here</a>, although with a little bit of thinking you can easily come to this conclusion.</li>
                        <li>As the knight <strong>has</strong> to move in an L-shape, there is a region between 4 completed tours that allows the knight to find a path from the top left board, to the top right, to the bottom right, to the bottom left, and back to the top left. This ensures that any 4 completed tours can be merged together be reorienting 4 edges of the graph.

                            <br/>
                            <br/>
                            <Center
                                width="50%"
                                height="50%"
                                ml="25%"
                            >
                                <Image src={KnightDiag2} layout="responsive"/>
                            </Center>
                        </li>
                    </ol>
                </Section>
            </Container>
        </Layout>
    )
}

export default KnightTour
