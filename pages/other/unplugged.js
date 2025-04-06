import {
    Heading,
    Container,
    Box,
    Button,
    Center,
    useColorModeValue
} from "@chakra-ui/react"
import { YouTubeEmbed } from "@next/third-parties/google"
import NextLink from "next/link"
import Image from "next/image"
import Section from "../../components/section"
import Latex from "react-latex"
import theme from "../../lib/theme"
import Layout from "../../components/layouts/child"

const Unplugged = () => {
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{ md: "flex" }} mt={6}>
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="other-work-gradient-text">
                                Unplugged
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <Box
                        mt={8}
                        mb={8}
                        mx="auto"
                        maxW={{ base: "100%", md: "80%", lg: "70%" }}
                    >
                        <YouTubeEmbed
                            videoid="FfTHbukyYYw"
                            params="controls=1"
                            style={{ width: "100%", aspectRatio: "16/9" }}
                        />
                    </Box>
                    <Box>
                        I made this short film from June to August 2020. I used
                        Blender to create and animate all the models and
                        composed and recorded the music on a digital keyboard.
                    </Box>
                </Section>
            </Container>
        </Layout>
    )
}

export default Unplugged
