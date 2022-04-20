import { Heading, Container, Box, useColorModeValue } from '@chakra-ui/react'
import styled from '@emotion/styled'
import Section from '../../components/section'

import AllegroSVG from "../imgs/allegro.svg"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 50%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const Allegro = () =>
{
    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <GradientText>
                        <Heading 
                            variant="page-title"
                        >
                            Allegro
                        </Heading>
                    </GradientText>
                </Box>
            </Box>

            <Section delay={0.3}>
                <AllegroSVG fill={useColorModeValue("black", "white")}/>
            </Section>
        </Container>
    )
}

export default Allegro