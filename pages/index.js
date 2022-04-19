import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import styled from "@emotion/styled"
import { keyframes } from "@emotion/react"
import Section from "../components/section"
// import Typist from "react-typist"

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

// const Blink = styled.h1`
//     opacity: 1;
//     animation: blink 1s linear infinite;
//     @keyframes blink {
//         0% { opacity:1; }
//         50% { opacity:0; }
//         100% { opacity:1; }
//     }
// `

const Page = () => {
    return (
        <Container>

            <Box display={{md:"flex"}} mt={6} align="left">
                <Box flexGrow={1}>
                        <Heading as="h2" variant="page-title">
                            <AnimatedGradientText>
                                {/* <Typist startDelay={500} avgTypingDelay={100}  */}
                                    {/* className={Blink} */}
                                    {/* cursor={{hideWhenDone: true, hideWhenDoneDelay: 500}}> */}
                                    Hi, {/*  <Typist.Delay ms={250}/> */} I&apos;m Shreyas
                                {/* </Typist> */}
                            </AnimatedGradientText>
                        </Heading>
                </Box>
            </Box>

            <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={6} mb={10} align="center">
                Welcome to my website!
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