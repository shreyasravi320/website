import NextLink from 'next/link'
import { Heading, Box, Text, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'

import IonSVG from "../public/imgs/ion.svg"

const IonGridItem = ({ textColor, children }) => (
    <Box w="100%" textAlign="center">
        <NextLink href={`/projects/ion`} scroll={false}>
            <LinkBox cursor="pointer">

                <IonSVG fill={useColorModeValue("black", "white")}/>

                <LinkOverlay href={`/projects/ion`}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={textColor}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Ion
                    </Heading>
                </LinkOverlay>
                <Text>{children}</Text>
            </LinkBox>
        </NextLink>
    </Box>
)

export default IonGridItem
