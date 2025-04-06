import {
    Box,
    Container,
    Heading,
    SimpleGrid,
    useColorModeValue
} from "@chakra-ui/react"
import Section from "../components/section"
import theme from "../lib/theme"
import Layout from "../components/layouts/child"
import { useState } from "react"

import { GridItem, GridItemTitle } from "../components/gridItem"

const Other = () => {
    const [isAnyFocused, setIsAnyFocused] = useState(false)
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{ md: "flex" }} mt={6}>
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="other-work-gradient-text">
                                Other Work
                            </div>
                        </Heading>
                    </Box>
                </Box>
                <br></br>

                <SimpleGrid columns={[1, 1, 2]} gap={"4vw"}>
                    <Section delay={0.2}>
                        <GridItem
                            href="/other/ship"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#f52a67">
                                Ship in a Bottle
                            </GridItemTitle>
                            A ship in a bottle made from scratch with wood,
                            paint, staples, epoxy, and super glue.
                        </GridItem>
                    </Section>
                    <Section delay={0.2}>
                        <GridItem
                            href="/other/keyboard"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#f52a67">
                                Keyboard
                            </GridItemTitle>
                            A custom keyboard designed perfectly for my hand
                            shape with many shortcuts for typing efficiency.
                        </GridItem>
                    </Section>
                    <Section delay={0.5}>
                        <GridItem
                            href="/other/unplugged"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#da2aae">
                                Unplugged
                            </GridItemTitle>
                            A 3D animated short film about mechanical and
                            electrical devices.
                        </GridItem>
                    </Section>
                    <Section delay={0.5}>
                        <GridItem
                            href="/other/naruto"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#da2aae">
                                Itachi Uchiha
                            </GridItemTitle>
                            A electromechanical design piece made for my
                            Naruto-loving friend&apos;s birthday.
                        </GridItem>
                    </Section>
                    <Section delay={0.8}>
                        <GridItem
                            href="/other/proofs"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#bf2af5">
                                Proofs
                            </GridItemTitle>
                            A collection of proofs of random math problems I
                            find interesting and feel the need to document.
                        </GridItem>
                    </Section>
                    <Section delay={0.8}>
                        <GridItem
                            href="/other/linux"
                            isAnyFocused={isAnyFocused}
                            setIsAnyFocused={setIsAnyFocused}
                        >
                            <GridItemTitle textColor="#bf2af5">
                                Linux
                            </GridItemTitle>
                            My current arch linux setup that (hopefully)
                            won&apos;t drastically change soon.
                        </GridItem>
                    </Section>
                </SimpleGrid>
            </Container>
        </Layout>
    )
}

export default Other
