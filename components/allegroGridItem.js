import NextLink from 'next/link'
import { Heading, Box, Text, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'

import AllegroSVG from "../pages/imgs/allegro.svg"

const AllegroGridItem = ({ textColor, children }) => (
    <Box w="100%" textAlign="center">
        <NextLink href={`/projects/allegro`} scroll={false}>
            <LinkBox cursor="pointer">

                <AllegroSVG fill={useColorModeValue("black", "white")}/>

                <LinkOverlay href={`/projects/allegro`}>
                    <Heading
                        as="h3" 
                        variant="section-title" 
                        textColor={textColor}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Allegro
                    </Heading>
                </LinkOverlay>
                <Text fontSize={14}>{children}</Text>
            </LinkBox>
        </NextLink>
    </Box>
)

export default AllegroGridItem
