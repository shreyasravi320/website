import { Heading, Container, Box, Button, useColorModeValue } from '@chakra-ui/react'
import NextLink from "next/link"
import Section from '../../components/section'
import Layout from '../../components/layouts/child'

import PixcellSVG from "../../public/imgs/pixcell.svg"
import PixcellScoreSVG from "../../public/imgs/pixcellScore.svg"

const PixCell = () =>
{
    return (
        <Layout>
            <Container maxW="container.lg">
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
                <Section delay={0.8}>
                    <Heading
                        as="h3"
                        variant="section-title"
                    >
                        Solution
                    </Heading>
                    PixCell has 3 steps that are repeated for an indefinite amount of generations, resulting in a population of pixels closely resembling the target image.
                    <br/>
                    <br/>
                    <ol>
                        <li>
                            <strong>New Generation</strong>
                            <br/>
                            Each cell has a genome encoded in a 64-bit integer containing their attributes and information. This consists of the color of the cell, which direction it moves in, how long it travels for, if it will reverse direction, when it will reverse direction, and its age. Initially, 3000 cells with each attribute completely randomized are generated randomly over the entire canvas.
                        </li>
                        <br/>
                        <li><strong>Selection</strong>
                            <br/>
                            During the duration of each generation, the cells move around based on their direction and movement attributes. At the generation&apos;s end, each cell is scored based on how close its color is to the color of the pixel at the image&apos;s corresponding location. The cells whose color differs by the image pixel&apos;s color by 15% or less are kept for reproduction in future generations, and the rest are killed off.
                            <br/>
                            <PixcellScoreSVG fill={useColorModeValue("black", "white")}/>
                        </li>
                        <br/>
                        <li><strong>Crossover and Mutation</strong>
                            <br/>
                            At the end of each generation, the surviving cells reproduce by breeding with the partner cell closest to them by distance. Each pair&apos;s offspring consists of some random weighted distribution of their parent&apos;s genome. There is also a 0.1% chance that any one of the attributes in the offspring&apos;s genome undergo mutation, resulting in a randomly generated value for that specific attribute as opposed to an inherited value from the parents.
                        </li>
                    </ol>
                </Section>
            </Container>
        </Layout>
    )
}

export default PixCell 
