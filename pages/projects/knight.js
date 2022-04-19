import { Heading, Container, Box } from '@chakra-ui/react'
import styled from '@emotion/styled'
import Section from '../../components/section'

import KnightSVG from "../imgs/knight.svg"

const GradientText = styled.h1`
    background-image: linear-gradient(135deg, #ff7c20, #ff4093);
    background-size: 70%;
    background-clip: text;
    -webkit-text-fill-color: transparent;
`

const KnightTour = () =>
{
    return (
        <Container>
            <Box display={{md:"flex"}} mt={6}>
                <Box flexGrow={1}>
                    <GradientText>
                        <Heading 
                            variant="page-title"
                        >
                            KnightTour
                        </Heading>
                    </GradientText>
                </Box>
            </Box>
            
            <Section delay={0.3}>
                <KnightSVG />
            </Section>
        </Container>
    )
}

export default KnightTour