import NextLink from 'next/link'
import { Heading, Box, Text, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'

import SlangSVG from "../pages/imgs/slangThumb.svg"

const SlangGridItem = ({ textColor, children }) => (
    <Box w="100%" textAlign="center">
        <NextLink href={`/projects/slang`} scroll={false}>
            <LinkBox cursor="pointer">

                <SlangSVG/>

                <LinkOverlay href={`/projects/slang`}>
                    <Heading
                        as="h3" 
                        variant="section-title" 
                        textColor={textColor}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Slang
                    </Heading>
                </LinkOverlay>
                <Text fontSize={14}>{children}</Text>
            </LinkBox>
        </NextLink>
    </Box>
)

export default SlangGridItem
