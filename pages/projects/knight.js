import { Heading, Container, Box, SimpleGrid, useColorModeValue } from '@chakra-ui/react'
import Image from "next/image"
import styled from '@emotion/styled'
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'

import KnightSVG from "../imgs/knight.svg"
import KnightDiag from "../imgs/knightDiag.png"
import KnightDiag2 from "../imgs/knightDiag2.png"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 24em;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const KnightTour = () =>
{
    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <GradientText>
                        <Heading 
                            variant="page-title"
                        >
                            KnightTour
                        </Heading>
                    </GradientText>
                </Box>
            </Box>
            
            <Section delay={0.3}>
                <KnightSVG fill={useColorModeValue("black", "white")}/>
            </Section>

            <Section delay={1.1}>
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
            </Section>
            <Section delay={1.9}>
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
                <Section delay={2.7}>
                    <SimpleGrid columns={[1,1,1]} spacing={0} minWidth="56vw" marginX="-7vw" paddingLeft="5%" paddingRight="5%">
                        <Image src={KnightDiag} layout="responsive"/>
                    </SimpleGrid>
                    <figure style={{textAlign: "center"}}><i><small>KnightTour on a 12 x 12 board by generating four 6 x 6 tours and merging them</small></i></figure>

                    <br></br>
                    <link
                        href="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.9.0/katex.min.css"
                        rel="stylesheet"
                    />
                    The algorithm works for a couple reasons:
                    <ol style={{paddingLeft: "10%"}}>
                        <li style={{marginTop: "2%"}}>
                            <Latex>
                                Any $n \times n$ board can be broken up in to some combination of $6 \times 6$, $6 \times 8$, $8 \times 8$, $8 \times 10$, $10 \times 10$, and $10 \times 12$ boards. 
                            </Latex> A proof is presented <a href="https://github.com/shreyasravi320/KnightTour/blob/main/KnightTour.pdf" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>here</a> as part of the KnightTour GitHub repo.
                        </li>
                        <li style={{marginTop: "2%"}}>
                            The merging process of the four subsections can be done in constant time since we only have to look at the region of 48 squares that allow for a knight to jump from section to section. Since the knight&apos;s movement edges are always the same size (2 squares in 1 direction, 1 square in another perpendicular direction), there are a finite number of vertex pairs that allow for a jump between sections.
                            <br></br>
                            <br></br>
                            <SimpleGrid columns={[1,1,1]} paddingLeft="18%" paddingRight="18%">
                                <Image src={KnightDiag2} layout="responsive"/>
                            </SimpleGrid>
                        </li>
                        <li style={{marginTop: "2%"}}>
                            <Latex>
                                A complete tour is impossible on a board where $n$ is odd, since there will be an odd number of squares. One property of the knight the color of the square it jumps to always switches on each move. If we have an odd number of squares, we cannot come back to the starting square since the last vertex in the tour will be the same color as the starting vertex.
                            </Latex>
                        </li>
                    </ol>

                    <br></br>
                    <Latex displayMode={true}>
                        Using these properties, we are able to efficiently solve the KnightTour problem in polynomial time. In particular, the recurrence describing this problem is $$T(n^2) = 4T(n^2/4) + \Theta(1) = \Theta(n^2)$$ 
                    </Latex>
                    <Latex>
                        since we divide the board as evenly into four pieces as possible and perform constant work computing the 4 edges to join the sections. Ultimately, KnightTour runs in linear time in terms of the number of squares on the board.
                    </Latex>
                </Section>
            </Section>
        </Container>
    )
}

export default KnightTour