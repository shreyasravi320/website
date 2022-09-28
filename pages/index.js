import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import styled from "@emotion/styled"
import { keyframes } from "@emotion/react"
import Section from "../components/section"
import { useEffect } from 'react'

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
                            {/*<Typist startDelay={1000} avgTypingDelay={100}
                                cursor={{hideWhenDone: true, hideWhenDoneDelay: 2400, blink: true}}>
                                Hi, <Typist.Delay ms={250}/> I&apos;m <Typist.Delay ms={50}/> Shreyas
                            </Typist>
                            */}
                            Hi, I&apos;m Shreyas
                        </AnimatedGradientText>
                    </Heading>
                </Box>
            </Box>

            <Section delay={0.6}>
                <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={6} mb={10} align="center">
                    Welcome to my website!
                </Box>
            </Section>

            <Section delay={1.5}>
                <Heading
                    as="h3"
                    variant="section-title"
                    textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                >
                    About Me
                </Heading>
                I first started writing code in around the 8th grade, initially building little single-player console games. Since then, I would often find myself spending hours at a time thinking about how to interact with the computer to solve puzzles.
                Something about the problem-solving skills and logical reasoning drew me in, and once I started working on a task, I couldn&apos;mt stop.
                <br></br>
                <br></br>
                I am majoring in Computer Science at Tufts University. I&apos;mve collected a few of my most exciting projects I&apos;mve made, and I hope that readers share the same wonder and joy that I experienced when making these discoveries.
            </Section>
        </Container>
    )
}

export default Page
