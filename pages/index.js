import {
    Box,
    Container,
    Heading,
    useColorModeValue,
    Stack,
    Button
} from "@chakra-ui/react"
import Section from "../components/section"
import Layout from "../components/layouts/child"
import NextLink from "next/link"

const Page = () => {
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{ md: "flex" }} mt={6} align="left">
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="animated-gradient-text">
                                Hi, I&apos;m Shreyas
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0}>
                    <Box
                        borderRadius="lg"
                        bg={useColorModeValue("gray.100", "gray.900")}
                        p={3}
                        mt={6}
                        mb={10}
                        align="center"
                    >
                        I like math, music, art, and nature
                    </Box>
                    <Box
                        display="flex"
                        flexDirection={{ base: "column", md: "row" }}
                        alignItems="center"
                        justifyContent="center"
                        gap={{ base: 4, md: 0 }} // Adds gap between buttons in column mode
                    >
                        <NextLink href="/projects">
                            <Button
                                variant="outline"
                                borderColor="#ff5e5a"
                                bgGradient="linear(135deg, #ff7c20, #ff4093)"
                                bgClip="text"
                                color="transparent"
                                _hover={{
                                    bg: "linear-gradient(135deg, #ff7c20, #ff4093)",
                                    color: useColorModeValue("white", "black")
                                }}
                                colorScheme="transparent"
                                mb={{ base: 4, md: 0 }}
                                mr={{ base: 0, md: 12 }}
                            >
                                My code projects
                            </Button>
                        </NextLink>
                        <NextLink href="/resume">
                            <Button
                                variant="outline"
                                borderColor="#03c8c2"
                                bgGradient="linear(135deg, #03fc88, #0394fc)"
                                bgClip="text"
                                color="transparent"
                                _hover={{
                                    bg: "linear-gradient(135deg, #03fc88, #0394fc)",
                                    color: useColorModeValue("white", "black")
                                }}
                                colorScheme="transparent"
                                mb={{ base: 4, md: 0 }}
                                mr={{ base: 0, md: 12 }}
                            >
                                My resume
                            </Button>
                        </NextLink>
                        <NextLink href="/other">
                            <Button
                                variant="outline"
                                borderColor="#da2aae"
                                bgGradient="linear(225deg, #f52a67, #bf2af5)"
                                bgClip="text"
                                color="transparent"
                                _hover={{
                                    bg: "linear-gradient(135deg, #f52a67, #bf2af5)",
                                    color: useColorModeValue("white", "black")
                                }}
                                colorScheme="transparent"
                            >
                                My other projects
                            </Button>
                        </NextLink>
                    </Box>
                </Section>
            </Container>
        </Layout>
    )
}

export default Page
