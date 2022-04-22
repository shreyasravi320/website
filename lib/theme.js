import { extendTheme } from "@chakra-ui/react"
import { mode } from "@chakra-ui/theme-tools"

const styles = {
    global: props => ({
        body: {
            bg: mode("white", "black")(props),
        }
    })
}

const config = {
    initialColorMode: "light",
    // useSystemColorMode: true
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
                // fontSize: "4.5em",
                fontSize: 60
            }
        }
    },

    // Style for links
    Link: {
        // baseStyle: props => ({
        //     // color: "#ff63c3",
        //     // textUnderlineOffset: 3
        // })
    }
}

const colors = {
    linkBlue: "#ff4136",
}

const theme = extendTheme({
    config,
    styles,
    components,
    colors
})

export default theme