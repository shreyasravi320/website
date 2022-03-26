import React from "react"
import { useColorMode } from "@chakra-ui/react"
import { IconButton, useColorModeValue } from "@chakra-ui/react"
import { SunIcon, MoonIcon } from "@chakra-ui/icons"

const ThemeToggle = () => {
    const { colorMode, toggleColorMode } = useColorMode()

    return (
        <IconButton 
            aria-label="Toggle theme" 
            colorScheme="gray"
            icon={useColorModeValue(<MoonIcon/>, <SunIcon/>)}
            onClick={toggleColorMode}
        >
        </IconButton>
    )
}

export default ThemeToggle