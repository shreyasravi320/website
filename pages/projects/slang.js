import { Heading, Container, Box } from '@chakra-ui/react'
// import Image from "next/image"
import styled from '@emotion/styled'
import Section from '../../components/section'
// import Latex from 'react-latex'

import SlangSVG from "../imgs/knight.svg"

// import { chakra, shouldForwardProp } from "@chakra-ui/react"
// import { motion } from "framer-motion"

// const MotionDiv = chakra(motion.div, {
//     shouldForwardProp: prop => {
//         return shouldForwardProp(prop) || prop === "transition"
//     }
// })

// const Section = ({ children, delay=0 }) => (
//     <MotionDiv
//         initial={{x: -20, opacity: 0}}
//         animate={{x: 0, opacity: 1}}
//         transition={{duration: 0.8, delay}}
//         mb={6}
//     >
//         {children}
//     </MotionDiv>
// )

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 50%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const Slang = () =>
{
    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    {/* <Section delay={0.3}> */}
                        <GradientText>
                            <Heading 
                                variant="page-title"
                            >
                                Slang
                            </Heading>
                        </GradientText>
                    {/* </Section> */}
                </Box>
            </Box>

            <Section delay={0.3}>
                <SlangSVG />
            </Section>
        </Container>
    )
}

export default Slang