import NextLink from "next/link"
import {
    Container, Box, Link,
    Stack, Menu, MenuItem, MenuList,
    IconButton, useColorModeValue, MenuButton
} from "@chakra-ui/react"
import { HamburgerIcon } from "@chakra-ui/icons"
import ThemeToggle from "./themebutton"

const LinkItem = ({ href, path, children }) => {
    const active = path === href
    const color = useColorModeValue("gray.100", "gray.900")
    return (
        <Link
            as={NextLink}
            href={href}
            style={{textDecoration: "none"}} px={4} py={2}
            rounded="md"
            bg={active ? color : undefined}
            color={useColorModeValue("black", "white")}
            _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
        >
            {children}
        </Link>
    )
}

const NavBar = ({ path }) => {
    return (
        <Box
            position="fixed"
            as="nav" w="100%"
            bg={useColorModeValue("white", "black")}
            zIndex={200}
        >
            <Container
                display="flex"
                p={3}
                maxW="container.md"
                wrap="wrap"
                align="center"
                justify="space-between"
            >
                <Stack
                    direction={{base: "column", md: "row"}}
                    display={{base: "none", md: "flex"}}
                    width={{base: "full", md: "auto"}}
                    alignItems="center"
                    flexGrow={1}
                    mt={{base: 4, nmd: 0}}
                    fontSize="1.2em"
                >
                    <LinkItem href="/" path={path}>
                        Home
                    </LinkItem>
                    <LinkItem href="/projects" path={path}>
                        Projects
                    </LinkItem>
                    <LinkItem href="/resume" path={path}>
                        Resume
                    </LinkItem>
                    <LinkItem href="/other" path={path}>
                        Other
                    </LinkItem>
                </Stack>

                <Box flex={1} align="right">
                    <ThemeToggle/>
                    <Box ml={2} display={{base: "inline-block", md: "none"}}>
                        <Menu>
                            <MenuButton
                                as={IconButton}
                                icon={<HamburgerIcon/>}
                                colorScheme="transparent"
                                aria-label="Options"
                                color={useColorModeValue("gray.900", "gray.100")}
                                bg={useColorModeValue("gray.100", "gray.900")}
                                _hover={{bgColor: useColorModeValue("gray.200", "gray.800")}}
                            />
                            <MenuList
                                bg={useColorModeValue("white", "black")}
                            >
                                <Link
                                    as={NextLink}
                                    href="/"
                                >
                                    <MenuItem
                                        _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
                                        style={{textDecoration: "none"}}
                                    >
                                        Home
                                    </MenuItem>
                                </Link>
                                <Link
                                    as={NextLink}
                                    href="/projects"
                                >
                                    <MenuItem
                                        _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
                                        style={{textDecoration: "none"}}
                                    >
                                        Projects
                                    </MenuItem>
                                </Link>
                                <Link
                                    as={NextLink}
                                    href="/projects"
                                >
                                    <MenuItem
                                        _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
                                        style={{textDecoration: "none"}}
                                    >
                                        Resume
                                    </MenuItem>
                                </Link>
                                <Link
                                    as={NextLink}
                                    href="/other"
                                >
                                    <MenuItem
                                        _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
                                        style={{textDecoration: "none"}}
                                    >
                                        Other
                                    </MenuItem>
                                </Link>
                            </MenuList>
                        </Menu>
                    </Box>
                </Box>
            </Container>
        </Box>
    )
}

export default NavBar
