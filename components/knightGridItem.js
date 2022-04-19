import NextLink from 'next/link'
import { Heading, Box, Text, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'

import KnightSVG from "../pages/imgs/knightThumb.svg"

const KnightGridItem = ({ textColor, children }) => (
    <Box w="100%" textAlign="center">
        <NextLink href={`/projects/knight`} scroll={false}>
            <LinkBox cursor="pointer">

                <KnightSVG/>

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
                <Text fontSize={14}>{children}</Text>
            </LinkBox>
        </NextLink>
    </Box>
)

export default KnightGridItem
