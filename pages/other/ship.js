import { Heading, Container, Box, Button, Center, useColorModeValue, SimpleGrid } from '@chakra-ui/react'
import NextLink from "next/link"
import Image from "next/image"
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'
import Layout from '../../components/layouts/child'

import ShipPNG from '../../public/imgs/ship.png'
import ShipWoodPNG from '../../public/imgs/ship_1.png'
import ShipPaintedPNG from '../../public/imgs/ship_2.png'
import ShipMastsPNG from '../../public/imgs/ship_3.png'
import ShipSailsPNG from '../../public/imgs/ship_4.png'

const Ship = () =>
{
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading
                            variant="page-title"
                        >
                            <div className="other-work-gradient-text">
                                Ship in a Bottle
                            </div>
                        </Heading>

                        <Section delay={0.2}>
                            <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                <Image src={ShipPNG} layout="responsive"/>
                            </Box>

                            I made this project because I thought ships in bottles looked cool. After finding an empty bottle on Amazon, I got some wood from Home Depot and started carving out the shape of the ship. I then painted the wood and once it dried, I added a front and rear railing.
                            <br></br>
                            <br></br>
                            I built make-shift masts out of dowels, tied the parts together using violin bow hair, and then glued paper sails on them. The masts were attached into the ship by a hinge so that they could be folded to allow the ship to fit through the neck of the bottle.
                            
                            <SimpleGrid columns={[0, 0, 2]}>
                                <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                    <Image src={ShipWoodPNG} layout="responsive"/>
                                </Box>
                                <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                    <Image src={ShipPaintedPNG} layout="responsive"/>
                                </Box>
                                <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                    <Image src={ShipMastsPNG} layout="responsive"/>
                                </Box>
                                <Box mt={8} mb={8} mx="auto" maxW={{ base: "100%", md: "80%", lg: "70%" }}>
                                    <Image src={ShipSailsPNG} layout="responsive"/>
                                </Box>
                            </SimpleGrid>
                            
                            For the ocean, I mixed epoxy resin with blue paint and poured a layer into the bottle. As it dried, I folded the masts of the ship down to fit in the bottle, tied the tops to some string and coated the bottom of the ship with super glue. Once the ship was inside the bottle, I pulled the string up to straighten the masts and cut the excess string.
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Ship;
