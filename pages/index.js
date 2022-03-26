import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import styled from "@emotion/styled"
import { keyframes } from "@emotion/react"
import Section from "../components/section"

const gradient = keyframes`
from {
    -webkit-filter: hue-rotate(0deg);
}
to {
    -webkit-filter: hue-rotate(360deg);
}
`

const AnimatedGradientText = styled.h1`
    background-image: linear-gradient(135deg, #79c2ff, #4a5888);
    background-size: 300%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
    -webkit-animation: ${gradient} 10s ease-in-out infinite;
`

const Page = () => {
    return (
        <Container>

            <Box display={{md:"flex"}} mt={6} align="left">
                <Box flexGrow={1}>
                    <Heading as="h2" variant="page-title">
                        <AnimatedGradientText>
                            Hi, I&apos;m Shreyas
                        </AnimatedGradientText>
                    </Heading>
                </Box>
            </Box>

            <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={5} mb={10} align="center">
                Random text here lol
            </Box>

            <Section delay={0.3}>
                <Heading 
                    as="h3" 
                    variant="section-title" 
                    textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                >
                    About Me
                </Heading>
            </Section>
        </Container>
    )
}

export default Page