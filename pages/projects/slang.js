import { Heading, Container, Box } from '@chakra-ui/react'
import { useColorModeValue } from '@chakra-ui/react'
import styled from '@emotion/styled'
import Section from '../../components/section'
// import theme from '../../lib/theme'
// import Image from "next/image"
import { useEffect } from 'react'

import SlangSVG from "../imgs/slang.svg"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 10em;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const Slang = () =>
{
    useEffect(() => {
        window.scrollTo(0, 0)
    })

    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <GradientText>
                        <Heading 
                            variant="page-title"
                        >
                            Slang
                        </Heading>
                    </GradientText>
                </Box>
            </Box>

            <Section delay={0.3}>
                <SlangSVG fill={useColorModeValue("black", "white")}/>
            </Section>

            <Section delay={1.1}>
                <Heading
                    as="h3"
                    variant="section-title"
                >
                    Challenge
                </Heading>
                Create a programming language that has easy to understand Python-like syntax as well as execution speed on par with C and C++.
            </Section>
            <Section delay={1.9}>
            <Heading
                    as="h3"
                    variant="section-title"
                >
                    Solution
                </Heading>
                Slang is a compiled programming language in development that combines the simplicity of writing Python code and the high exeuction speed of C and C++.
                
                <br></br>
                <br></br>
                <div style={{paddingLeft: "10%", paddingRight: "10%"}}>
                    {/* <code>main(argc: int, argv: *str): int &#x7b;</code> */}
                    <code>main &#x7b;</code>
                    <div style={{paddingLeft: "10%", paddingRight: "10%"}}>
                        <code>fib1:</code> <code>int</code> <code>=</code> <code>0</code><br></br>
                        <code>fib2:</code> <code>int</code> <code>=</code> <code>1</code><br></br>
                        <code>@ i = 0, i &lt; 10, i++ &#x7b;</code><br></br>

                        <div style={{paddingLeft: "10%", paddingRight: "10%"}}>
                            <code>print</code> <code>fib1</code><br></br>
                            <code>tmp = fib2</code><br></br>
                            <code>fib2 += fib1</code><br></br>
                            <code>fib1 = fib2</code><br></br>
                        </div>

                        <code>&#x7d;</code>
                    </div>

                    <code>&#x7d;</code>
                </div>
                <figure style={{textAlign: "center"}}><i><small>Printing the first 10 Fibonacci numbers in Slang</small></i></figure>
            </Section>  
        </Container>
    )
}

export default Slang