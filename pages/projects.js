import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"

const Projects = () => {
    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <Heading variant="page-title">
                        Projects
                    </Heading>
                </Box>
            </Box>

            <Box borderRadius="lg" bg={useColorModeValue("gray.100", "gray.900")} p={3} mt={6} mb={6} align="center">
                Random text here lol
            </Box>
        </Container>
    )
}

export default Projects