import { Heading, Container, Box } from '@chakra-ui/react'
import Image from "next/image"
import styled from '@emotion/styled'
import Section from '../../components/section'
import Latex from 'react-latex'

import KnightSVG from "../imgs/knight.svg"
import KnightDiag from "../imgs/knightDiag.png"

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
                <KnightSVG />
            </Section>

            <Section delay={0.9}>
                <Heading
                    as="h3"
                    variant="section-title"
                >
                    Problem
                </Heading>
                <link
                    href="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.9.0/katex.min.css"
                    rel="stylesheet"
                />
                <Latex>
                    On an arbitrary $n \times n$ chessboard, find a path that a knight can take to visit every square exactly once and return to the starting square.
                </Latex>
            </Section>
            <Section delay={1.5}>
                <Heading
                    as="h3"
                    variant="section-title"
                >
                    Solution
                </Heading>
                {/* <link
                    href="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.9.0/katex.min.css"
                    rel="stylesheet"
                /> */}
                The problem is a more specific version of the generalized problem of finding a <a href="https://en.wikipedia.org/wiki/Hamiltonian_path" target="_blank" rel="noreferrer" style={{color:"#4455FF"}}>Hamiltonian cycle</a> in a graph. 
                In simple terms, a Hamiltonian cycle is a path in a graph that touches every vertex exactly once and returns to the starting vertex.
                In general, the <a href="https://en.wikipedia.org/wiki/Hamiltonian_path_problem" target="_blank" rel="noreferrer" style={{color:"#4455FF"}}>Hamiltonian path problem</a> is an <a href="https://en.wikipedia.org/wiki/NP-completeness" target="_blank" rel="noreferrer" style={{color:"#4455FF"}}>NP-complete</a> problem, meaning that it currently cannot be solved in polynomial time.
            
                <br></br>
                <br></br>

                However, KnightTour takes advantage of properties of the knight&apos;s movement along a chessboard, and is able to solve complete tours in polynomial time.
                KnightTour breaks up any board into a series of smaller and smaller boards, computes the knight&apos;s tour on each of these boards, and then merges the tours together.
                
                <Image src={KnightDiag} layout="responsive"/>
            </Section>
        </Container>
    )
}

export default KnightTour