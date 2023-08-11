import React from "react"
import { useColorMode } from "@chakra-ui/react"
import { IconButton, useColorModeValue } from "@chakra-ui/react"
import { SunIcon, MoonIcon } from "@chakra-ui/icons"

const ThemeToggle = () => {
    const { toggleColorMode } = useColorMode()

    return (
        <IconButton
            aria-label="Toggle theme"
            color={useColorModeValue("gray.900", "gray.100")}
            bg={useColorModeValue("gray.100", "gray.900")}
            icon={useColorModeValue(<MoonIcon/>, <SunIcon/>)}
            onClick={toggleColorMode}
            _hover={{bgColor: useColorModeValue("gray.200", "gray.800")}}
            fontSize="1.2em"
        >
        </IconButton>
    )
}

export default ThemeToggle
