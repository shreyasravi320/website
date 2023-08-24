import { Heading, Container, Box, Button, useColorModeValue } from '@chakra-ui/react'
import NextLink from "next/link"
import Section from '../../components/section'
import Layout from '../../components/layouts/child'

import PixcellSVG from "../../public/imgs/pixcell.svg"

const PixCell = () =>
{
    return (
        <Layout>
            <Container maxW="container.md">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading
                            variant="page-title"
                        >
                            <div className="projects-gradient-text">
                                PixCell
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <PixcellSVG fill={useColorModeValue("black", "white")}/>
                </Section>
                <Section delay={0.5}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Challenge
                    </Heading>
                    Create an simulation of pixels that survive, reproduce, and evolve over time into an ecosystem that resembles a target image.

                    <br/>
                    <br/>

                    <NextLink href="pixcell/simulation/">
                        <Button
                            bg="linear-gradient(135deg, #ff7c20, #ff4093)"
                            color={useColorModeValue('white', 'black')}
                            _hover={{bg: "linear-gradient(135deg, #dd7c20, #dd4093)"}}
                            colorScheme="transparent"
                        >
                            Play with it here!
                        </Button>
                    </NextLink>
                </Section>
            </Container>
        </Layout>
    )
}

export default PixCell 
