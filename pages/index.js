import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import styled from "@emotion/styled"
import { keyframes } from "@emotion/react"
import Section from "../components/section"
import { useEffect } from 'react'
import Typist from 'react-typist'

const gradient = keyframes`
from {
    -webkit-filter: hue-rotate(0deg);
}
to {
    -webkit-filter: hue-rotate(360deg);
}
`
// 135deg straight
const AnimatedGradientText = styled.h1`
    background-image: linear-gradient(135deg, #79c2ff, #4a5888);
    background-size: 300%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
    -webkit-animation: ${gradient} 6s ease-in-out infinite;
`

const Page = () => {
    useEffect(() => {
        window.scrollTo(0, 0)
    })

    return (
        <Container maxW="container.lg">
            <Box display={{md:"flex"}} mt={6} align="left">
                <Box flexGrow={1}>
                        <Heading as="h2" variant="page-title">
                            <AnimatedGradientText>
                                <Typist startDelay={1000} avgTypingDelay={100}
                                    cursor={{hideWhenDone: true, hideWhenDoneDelay: 2400, blink: true}}>
                                    Hi, <Typist.Delay ms={250}/> I&apos;m <Typist.Delay ms={50}/> Shreyas
                                </Typist>
                            </AnimatedGradientText>
                        </Heading>
                </Box>
            </Box>

            <Section delay={3.2}>
                <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={6} mb={10} align="center">
                    Welcome to my website!
                </Box>
            </Section>

            <Section delay={4.2}>
                <Heading
                    as="h3"
                    variant="section-title"
                    textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                >
                    About Me
                </Heading>
                I am currently a sophomore at Tufts University in Massachusetts.
            </Section>
        </Container>
    )
}

export default Page
