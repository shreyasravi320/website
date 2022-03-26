import Head from "next/head"
import NavBar from "../navbar"
import { Box, Container, Th } from "@chakra-ui/react"
import { useColorModeValue } from "@chakra-ui/react"

const Main = ({ children, router }) => {
    return (
        <Box as="main" pb={8}>
            <Head>
                <meta name="viewport" content="width=device-width, initial-scale=1"/>
                <title>Shreyas Ravi - Home</title>
            </Head>

            <NavBar path={router.asPath}/>

            <Container maxW="container.md" pt={14}>
                {children}
            </Container>
        </Box>
    )
}

export default Main