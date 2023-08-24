import { extendTheme } from "@chakra-ui/react"
import { mode } from "@chakra-ui/theme-tools"

const styles = {
    global: props => ({
        body: {
            bg: mode("white", "black")(props),
            fontFamily: "Rubik"
        }
    })
}

const config = {
    initialColorMode: "light",
    useSystemColorMode: true
}

const components = {
    // Style for headings
    Heading: {
        variants: {
            "section-title": {
                textDecoration: "underline",
                fontSize: "1.4em",
                textUnderlineOffset: 8,
                textDecorationColor: "#63636363",
                textDecorationThickness: 3,
                marginTop: 4,
                marginBottom: 4,
                fontFamily: "Rubik"
            },
            "page-title": {
                textDecoration: "none",
                // fontSize: "4.5em",
                fontSize: "4.5em",
                align: "left",
                fontFamily: "Rubik"
            }
        }
    },

    // Style for links
    Link: {
        // baseStyle: props => ({
        //     // color: "#ff63c3",
        //     // textUnderlineOffset: 3
        // })
    },

    Text: {
        fontFamily: "Inconsolata"
    }
}

const colors = {
    linkBlue: "#ff4136",
}

const sizes = {
    container: {
        lg: "960px",
        md: "768px",
        sm: "640px",
        xl: "1280px",
    }
}

const theme = extendTheme({
    config,
    styles,
    components,
    colors,
    sizes
})

export default theme
