import NextLink from 'next/link'
import { Heading, Box, LinkBox, LinkOverlay, useColorModeValue } from '@chakra-ui/react'
import { useState } from 'react'

export const GridItemTitle = ({ textColor, children }) => {
    return (
        <Heading
            as="h3"
            variant="section-title"
            textColor={textColor}
            textDecorationColor={useColorModeValue("gray.200", "gray.800")}
        >
            {children}
        </Heading>
    )
}

export const GridItem = ({ href, isAnyFocused, setIsAnyFocused, children }) => {
    const [focus, setFocus] = useState(false)
    return (
        <Box
            w="100%"
            textAlign="center"
            p="4"
            style={{
                opacity: !isAnyFocused || focus ? '100%' : '15%',
                borderRadius: 12,
                transition: 'background-color 0.3s, transform 0.3s, opacity 0.3s',
            }}
            onMouseEnter={() => { setFocus(true); setIsAnyFocused(true); }}
            onMouseLeave={() => {setFocus(false); setIsAnyFocused(false); }}
            _hover={{
                background: useColorModeValue("#dddddd", "#222222"),
                transform: 'translateY(-4px)',
            }}
            cursor="pointer"
        >
            <LinkBox>
                <LinkOverlay
                    as={NextLink}
                    href={href}
                >
                    {children}
                </LinkOverlay>
            </LinkBox>
        </Box>
    )
}
