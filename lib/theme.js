import { extendTheme, useColorModeValue } from "@chakra-ui/react"
import { mode } from "@chakra-ui/theme-tools"

const styles = {
    global: props => ({
        body: {
            bg: mode("white", "black")(props),
        }
    })
}

const config = {
    initialColorMode: "dark",
    useSystemColorMode: true
}

const components = {
    // Style for headings
    Heading: {
        variants: {
            "section-title": {
                textDecoration: "underline",
                fontSize: 20,
                textUnderlineOffset: 8,
                textDecorationColor: "#63636363",
                textDecorationThickness: 3,
                marginTop: 4,
                marginBottom: 4
            },
            "page-title": {
                textDecoration: "none",
                fontSize: 70,
            }
        }
    },

    // Style for links
    Link: {
        baseStyle: props => ({
            // color: "#ff63c3",
            // textUnderlineOffset: 3
        })
    }
}

const colors = {

}

const theme = extendTheme({
    config,
    styles,
    components,
    colors
})

export default theme