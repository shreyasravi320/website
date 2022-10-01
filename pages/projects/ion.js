import { Heading, Container, Box } from '@chakra-ui/react'
import { useColorModeValue } from '@chakra-ui/react'
import styled from '@emotion/styled'
import Section from '../../components/section'
import theme from '../../lib/theme'
import Image from "next/image"
import { useEffect } from 'react'

import IonSVG from "../imgs/ion.svg"
import IonDemo1 from "../imgs/ionDemo1.gif"
import IonDiag1 from "../imgs/ionDiag1.svg"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 35%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const mounted = false;

const Ion = () =>
{
    useEffect(() => {
        window.scrollTo(0, 0)
    });

    useEffect(() => {
        mounted = true;
    }, []);

    return (
        <Container maxW="container.md">
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <GradientText>
                        <Heading
                            variant="page-title"
                        >
                            Ion
                        </Heading>
                    </GradientText>
                </Box>
            </Box>

            <Section delay={(mounted ? 0 : 0.3)} time={(mounted ? 0 : 0.8)}>
                <IonSVG fill={useColorModeValue("black", "white")}/>
            </Section>

            <Section delay={(mounted ? 0 : 1.2)} time={(mounted ? 0 : 0.8)}>
                <Heading
                    as="h3"
                    variant="section-title"
                >
                    Challenge
                </Heading>
                For any given position in a game of chess, compute the best move for the next player.
            </Section>
            <Section delay={(mounted ? 0 : 2.1)} time={(mounted ? 0 : 0.8)}>
            <Heading
                    as="h3"
                    variant="section-title"
                >
                    Solution
                </Heading>
                Ion is a web-hosted chess engine that can find the best move from a <a href="https://en.wikipedia.org/wiki/Forsyth%E2%80%93Edwards_Notation" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>FEN</a> string describing the game state.
                By evaluating the game state along every possible line of moves, Ion can find the move that results in the best outcome for the next player.

                <br></br>
                <br></br>
                First, the game tree is constructed. We start at the current position, and the first level down contains all the possible moves the current player can make.
                For each of those moves at level 1, we look at all the moves the other player can make from the resulting position.
                This continues on and on until a suitable depth is reached, which is usually 12-13 for under 2-second computation time.

                <br></br>
                <br></br>

                Once we reach the bottom of the tree, we evaluate every position using an evaluation function that follows chess theory and strategy.
                The scores are then bubbled back up through the tree and we select the path that results in the maximum score.

                <IonDiag1 fill={useColorModeValue("black", "white")}/>

                Obviously though, looking at every possible chess position would take forever.
                So instead of looking at every position, we look at favorable moves for both players.
                If we expect the best response to any move chosen, we have more information about the path of best moves that can be made.

                <br></br>
                <br></br>
                Ultimately, an implementation of the <a href="https://en.wikipedia.org/wiki/Principal_variation_search" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>Principal Variation Search</a> algorithm is used in conjunction with a move ordering function and a transposition table to find the best move.

                <br></br>
                <br></br>
                <Image src={IonDemo1}/>
                <figure style={{textAlign: "center"}}><i><small>Ion finding a forced checkmating sequence</small></i></figure>
            </Section>
        </Container>
    )
}

export default Ion
