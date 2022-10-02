import { Heading, Container, Box, useColorModeValue } from '@chakra-ui/react'
import styled from '@emotion/styled'
import Section from '../../components/section'
import theme from '../../lib/theme'
import Image from "next/image"
import { useEffect } from 'react'
import Layout from '../../components/layouts/child'

import AllegroSVG from "../imgs/allegro.svg"
import AllegroDiag1 from "../imgs/allegroDiag1.svg"
import AllegroDemo1 from "../imgs/allegroDemo1.gif"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 40%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const Allegro = () =>
{
    useEffect(() => {
        window.scrollTo(0, 0)
    });

    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <GradientText>
                            <Heading
                                variant="page-title"
                            >
                                Allegro
                            </Heading>
                        </GradientText>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <AllegroSVG fill={useColorModeValue("black", "white")}/>
                </Section>

                <Section delay={0.5}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Challenge
                    </Heading>
                    Given a sentence in English describing a scene, automatically generate a 3D animation consisting of the key elements of the sentence.
                </Section>
                <Section delay={0.8}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Solution
                    </Heading>
                    Allegro is designed to eliminate the technical aspects of making animations so that anyone with a story in mind can bring it to life.
                    Using a combination of natural language processing, machine learning, and graphics rendering, Allegro takes any sentence inputted and generates a 3D animation replicating the meaning of the text given.

                    <br></br>
                    <br></br>
                    The first step is to process the semantics of the sentence. I used the <a href="https://www.nltk.org/" target="_blank" rel="noreferrer" style={{color: theme.colors.linkBlue, textDecoration: "underline"}}>Natural Language Toolkit (NLTK)</a> to parse each word of the sentence into its respective part of speech.
                    Allegro&apos;s sentence parser then filters out the parts of speech that are not relevant to the animation, such as articles, conjunctions, and certain prepositions.

                    <AllegroDiag1 fill={useColorModeValue("black", "white")}/>

                    From there, I created a machine learning model to categorize each of the words into an object, color, position, etc.
                    The model uses similarites between words that are hardcoded into Allegro to determine the correct category to sort each word in the given sentence.

                    <br></br>
                    <br></br>
                    The last step is to render the words into a 3D animation.
                    Based on the parsed data, Allegro&apos;s custom graphics engine determines the position, size, color, and orientation of each object and places it in the viewport.
                    Animations are procedurally generated using a mix of polynomial functions, wave simulations, and bezier curves.

                    <br></br>
                    <br></br>
                    <Image src={AllegroDemo1}/>
                    <figure style={{textAlign: "center"}}><i><small>A scene of a red boat floating on an ocean made in Allegro</small></i></figure>
                </Section>
            </Container>
        </Layout>
    )
}

export default Allegro
