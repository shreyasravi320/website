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
                            <small><i>Sep 2021 - Present</i></small>
                            <br></br>
                            Expecting a Bachelor of Science in Computer Science by December 2024
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
                            <small><i>May 2023 - Present</i></small>
                            <br></br>

                            Created analysis types to detect structurally suboptimal pawn moves and explain the effects in a visual manner for players to easily identify the threats.

                            <br></br>
                            <br></br>
                            Refactored the Brilliant move classifier from the ground up to satisfy specific criteria and generate easy to understand explanations for why exactly the move is Brilliant.

                            <br></br>
                            <br></br>
                            Developed a new workflow as part of a research API to scan through a provided user&apos;s games to find instances of excellent or brilliant pawn promotions to a knight, bishop, or rook.
                        </li>
                        <br/>
                        <li>
                            <h3><strong>Radix Labs</strong>, Cambridge, MA - <i>Software Engineering Intern</i></h3>
                            <small><i>May 2022 - Dec 2022</i></small>
                            <br></br>

                            Created heuristic-based scheduling algorithms to optimize for time and resource use in biology and chemistry labs.

                            <br></br>
                            <br></br>
                            Automated part of a CI/CD framework to mount a client machine onto a server, which would be used to compile, run, and push code to all other connected devices.
                            <br></br>
                            <br></br>
                            Serialized algorithms to provide seamless distribution of necessary services to client machines and robots.
                        </li>
                        <br></br>
                        <li>
                            <h3><strong>House Fish Balloon</strong>, Saratoga, CA - <i>Game Developer</i></h3>
                            <small><i>May 2021 - Jan 2022</i></small>
                            <br></br>

                            Designed and coded a board game created by the company in C++, Javascript, and Python, incorporating graphs and traversal algorithms.
                            <br></br>
                            <br></br>
                            Implemented and optimized a custom AI that looks at 8-9 moves in the future in under a second and selects the best outcome for itself.
                            <br></br>
                            <br></br>
                            Created a second AI based on DeepMind&apos;s AlphaZero paper, consisting of multiple neural networks that teach the AI how to win through self play.
                            <br></br>
                            <br></br>
                            Experimented with ReactJS and Firebase to create an online multiplayer version of the game.
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
                        Programming Languages
                    </Heading>
                    <strong>Proficient: </strong> C/C++, Java, Scala, JavaScript, Python
                    <br></br>
                    <strong>Familiar: </strong> Assembly (NASM), HTML + CSS, TypeScript
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
                    Programming Languages, Algorithms, Data Structures, Linear Algebra, Multivariable Calculus, Differential Equations
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
                    Indian, Western, and Electric Violin, Piano, 2D and 3D animation, Breakdancing, Chess, and Linux
                </Section>
                {/* <Section delay={1.5}>
                    <Heading
                        as="h3"
                        variant="section-title"
                        textDecorationColor={useColorModeValue("gray.200", "gray.800")}
                    >
                        Projects
                    </Heading>
                    <ul>
                        <li>
                            <h3><strong>Slang</strong> - <i>(C++, Assembly)</i></h3>
                            <br></br>

                                Created a compiler for a custom programming language with easy to type Python-like syntax and runtime performance on par with C and C++.
                                <br></br>
                                Compiles Slang code to highly optimized native Assembly code and generates an executable from there.
                                <br></br>
                                <br></br>
                        </li>
                        <li>
                            <h3><strong>KnightTour</strong> - <i>(C++)</i></h3>
                            <br></br>

                                Implemented an efficent algorithm that finds a circuit a knight can take on an arbitrary sized chess board such that each square is only touched once.
                                <br></br>
                                Optimized the runtime of finding a Hamiltonian cycle from exponential to linear using properties of the knight.
                                <br></br>
                                <br></br>
                        </li>
                        <li>
                            <h3><strong>Ion</strong> - <i>(C++, Python, JavaScript, HTML + CSS)</i></h3>
                            <br></br>

                                Made a web-hosted chess engine for finding the optimal move in a given position using Flask.
                                <br></br>
                                Developed an efficient search algorithm to compute outcomes at least 12 moves in advance within 1.5 seconds given any board state.
                                <br></br>
                                <br></br>
                        </li>
                        <li>
                            <h3><strong>Allegro</strong> - <i>(C++, Python)</i></h3>
                            <br></br>
                                Developed a 3D animation software that creates motion graphics with only a sentence as a given input.
                                <br></br>
                                Incorporated natural language processing to pluck out the keywords of a given sentence and generate the animation.
                                <br></br>
                                <br></br>
                        </li>
                    </ul>
                </Section> */}
            </Container>
        </Layout>
    )
}

export default Resume
