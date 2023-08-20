import NextLink from 'next/link'
import { Heading, Box, Text, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'

import KnightSVG from "../public/imgs/knight.svg"

const KnightGridItem = ({ textColor, children }) => (
    <Box w="100%" textAlign="center">
        <NextLink href={`/projects/knight`} scroll={false}>
            <LinkBox cursor="pointer">

                <KnightSVG fill={useColorModeValue("black", "white")}/>

                <LinkOverlay href={`/projects/knight`}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={textColor}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        KnightTour
                    </Heading>
                </LinkOverlay>
                <Text>{children}</Text>
            </LinkBox>
        </NextLink>
    </Box>
)

export default KnightGridItem
