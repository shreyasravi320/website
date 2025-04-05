import { Heading, Container, Box, Button, Center, useColorModeValue } from '@chakra-ui/react'
import NextLink from "next/link"
import Image from "next/image"
import Section from '../../components/section'
import Latex from 'react-latex'
import theme from '../../lib/theme'
import Layout from '../../components/layouts/child'

const Proofs = () =>
{
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading
                            variant="page-title"
                        >
                            <div className="other-work-gradient-text">
                                Proofs
                            </div>
                        </Heading>
                        <Section delay={0.2}>
                            <br></br>
                            This page contains proofs for math problems I stumbled across and found interesting enough to document. It will be periodically updated whenever I find a new problem to work on. All proof links open in a new tab.

                            <Heading
                                as="h3"
                                variant="section-title"
                            >
                                Mahonian Numbers
                            </Heading>
                            How many ways can a number be written as a sum of non-zero terms where the first term is at most 1, the second term is at most 2, etc.? <a href="/pdfs/mahonian_numbers.pdf" target="_blank" rel="noreferrer" style={{color: "#da2aae", textDecoration: "underline"}}>Proof</a>
                        </Section>
                    </Box>
                </Box>
            </Container>
        </Layout>
    )
}

export default Proofs;
