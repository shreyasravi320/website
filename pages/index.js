import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import Section from "../components/section"
import { useEffect } from 'react'
import Layout from '../components/layouts/child'

let mounted = false;
const Page = () => {
    useEffect(() => {
        mounted = true;
    }, []);

    return (
        <Layout>
            <Container maxW="container.md">
                <Box display={{md:"flex"}} mt={6} align="left">
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="animated-gradient-text">
                                Hi, I&apos;m Shreyas
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={(mounted ? 0 : 0)}>
                    <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={6} mb={10} align="center">
                        Welcome to my website!
                    </Box>
                </Section>

                <Section delay={(mounted ? 0.3 : 0.3)}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        About Me
                    </Heading>
                    I first started writing code in around the 8th grade, initially building little single-player console games. Since then, I would often find myself spending hours at a time thinking about how to interact with the computer to solve puzzles.
                    Something about the problem-solving skills and logical reasoning drew me in, and once I started working on a task, I couldn&apos;t stop.
                    <br></br>
                    <br></br>
                    Now, I am majoring in Computer Science at Tufts University. I&apos;ve collected a few of my most exciting projects I&apos;ve made, and I hope that readers share the same wonder and joy that I experienced when making these discoveries.
                </Section>
            </Container>
        </Layout>
    )
}

export default Page
