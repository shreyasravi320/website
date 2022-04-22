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
        <NextLink href={href}>
            <Link 
                style={{textDecoration: "none"}} px={4} py={2} 
                rounded="md" 
                bg={active ? color : undefined} 
                color={useColorModeValue("black", "white")}
                _hover={{bgColor: useColorModeValue("gray.100", "gray.900")}}
            >
                {children}
            </Link>
        </NextLink>
    )
}

const NavBar = props => {
    const { path } = props

    return (
        <Box 
            position="fixed" 
            as="nav" w="100%" 
            // bg={"#00000000"}
            bg={useColorModeValue("white", "black")}
            zIndex={100}
            {...props}
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
                </Stack>

                <Box flex={1} align="right">
                    <ThemeToggle/>
                    <Box ml={2} display={{base: "inline-block", md: "none"}}>
                        <Menu>
                            <MenuButton 
                                as={IconButton} 
                                icon={<HamburgerIcon/>} 
                                variant="outline" 
                                aria-label="Options"
                            />
                            <MenuList>
                                <NextLink href="/" passHref>
                                    <MenuItem as={Link} style={{textDecoration: "none"}}>Home</MenuItem>
                                </NextLink>
                                <NextLink href="/projects" passHref>
                                    <MenuItem as={Link} style={{textDecoration: "none"}}>Projects</MenuItem>
                                </NextLink>
                                <NextLink href="/resume" passHref>
                                    <MenuItem as={Link} style={{textDecoration: "none"}}>Resume</MenuItem>
                                </NextLink>
                            </MenuList>
                        </Menu>
                    </Box>
                </Box>
            </Container>
        </Box>
    )
}

export default NavBar