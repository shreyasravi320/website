import { Box, Container, Heading, useColorModeValue } from "@chakra-ui/react"
import Section from "../components/section"
import Layout from '../components/layouts/child'

const Resume = () => {
    return (
        <Layout>
            <Container maxW="container.lg">
                <Box display={{md:"flex"}} mt={6}>
                    <Box flexGrow={1}>
                        <Heading variant="page-title">
                            <div className="resume-gradient-text">
                                Resume
                            </div>
                        </Heading>
                    </Box>
                </Box>

                <Section delay={0.2}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={useColorModeValue("#00cfd8", "#00cfd8")}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Education
                    </Heading>
                    <ul>
                        <li>
                            <h3><strong>Tufts University</strong>, Medford, MA</h3>
                            <small><i>Sep 2021 - May 2025</i></small>
                            <br></br>
                            Expecting a Bachelor of Science in Computer Science and Engineering by May 2025
                            <br></br>
                        </li>
                    </ul>
                </Section>
                <Section delay={0.5}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={useColorModeValue("#00bdfa", "#00bdec")}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Work Experience
                    </Heading>
                    <ul>
                        <li>
                            <h3><strong>Chess.com</strong>, Remote - <i>Software Engineering Intern</i></h3>
                            <small><i>May 2023 - Mar 2025</i></small>
                            <br></br>
                            Rewrote the Brilliant move classifier from the ground up in <strong>C++</strong> to satisfy specific criteria related to piece sacrifices and pawn underpromotion. 
                            <br></br>
                            <br></br>

                            Generated simple and understandable explanations via custom <strong>LLMs</strong> with over 90% semantic accuracy for why exactly a move is Brilliant based on the outcome of future moves.
                            <br></br>
                            <br></br>

                            Implemented positional-based analysis to point out strategic mistakes players make, which are much more difficult to notice than piece blunders.
                            <br></br>
                            <br></br>

                            Developed a <strong>Python</strong> workflow to filter instances of pawn underpromotion out of 100,000+ played games. 
                            <br></br>
                            <br></br>

                            Assisted in debugging <strong>WebAssembly</strong> memory issues occurring during automatic building and testing via GitHub Action’s <strong>CI/CD</strong> pipeline, resulting in around 25% speedup in automated testing. 
                        </li>
                        <br/>
                        <li>
                            <h3><strong>Radix Labs</strong>, Cambridge, MA - <i>Software Engineering Intern</i></h3>
                            <small><i>May 2022 - Dec 2022</i></small>
                            <br></br>
                            Developed heuristic-based scheduling algorithms in <strong>Scala</strong> to optimize for time and resource use in biology and chemistry labs.
                            <br></br>
                            <br></br>

                            Automated part of a <strong>CI/CD</strong> framework to mount a client machine onto a server, which would be used to compile, run, and push code to all other connected devices.

                        </li>
                        <br></br>
                        <li>
                            <h3><strong>House Fish Balloon</strong>, Saratoga, CA - <i>Game Developer</i></h3>
                            <small><i>May 2021 - Jan 2022</i></small>
                            <br></br>

                            Designed and coded a board game created by the company in <strong>C++</strong> and <strong>Javascript</strong>.
                            <br></br>
                            <br></br>
                            Implemented and optimized a custom AI in <strong>C++</strong> based on <strong>Monte Carlo Tree Search</strong> that looks at 8-9 moves in the future in under a second and selects the best outcome for itself.
                            <br></br>
                            <br></br>
                            Created a second AI in <strong>Python</strong> based on DeepMind&apos;s AlphaZero paper, consisting of multiple neural networks that teach the AI how to win through self-play.
                            <br></br>
                            <br></br>
                            Utilized <strong>ReactJS</strong> and <strong>Firebase</strong> to create an online multiplayer version of the game.
                        </li>
                    </ul>
                </Section>
                <Section delay={0.8}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={useColorModeValue("#00bcff", "#00bcff")}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Technical Skills
                    </Heading>
                    <strong>Languages: </strong> C++, Python, JavaScript, Rust, C#, Scala
                    <br></br>
                    <strong>Skills: </strong> GitHub, (Arch) Linux, React, WebAssembly, Raspberry Pi, Arduino
                </Section>
                <Section delay={1.1}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={useColorModeValue("#26aaf9", "#26aaf9")}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        College Coursework
                    </Heading>
                    
                    Algorithms, Machine Structure and Assembly Programming, Game Theory, Discrete Math, Differential Equations, Multivariable Calculus, Linear Algebra
                </Section>
                <Section delay={1.1}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textColor={useColorModeValue("#24acfc", "#24acfc")}
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Interests and Hobbies
                    </Heading>
                    Violin, Piano, 2D and 3D animation, Rock climbing, Breakdancing
                </Section>
            </Container>
        </Layout>
    )
}

export default Resume
