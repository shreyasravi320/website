import { ChakraProvider } from "@chakra-ui/provider"
import Layout from "../components/layouts/main"
import theme from "../lib/theme"
import { AnimatePresence } from 'framer-motion'
import './index.css'

const Website = ({ Component, pageProps, router }) => {
    return (
        <ChakraProvider theme={theme}>
            <Layout router={router}>
                <AnimatePresence mode='wait' initial={true}>
                    <Component {...pageProps} key={router.route}/>
                </AnimatePresence>
            </Layout>
        </ChakraProvider>
    )
}

export default Website
