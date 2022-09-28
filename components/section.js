import { motion } from "framer-motion"
import { chakra, shouldForwardProp } from "@chakra-ui/react"

const MotionDiv = chakra(motion.div, {
    shouldForwardProp: prop => {
        return shouldForwardProp(prop) || prop === "transition"
    }
})

const Section = ({ children, delay=0, time=0.8 }) => (

    <MotionDiv
        initial={{y: 10, opacity: 0}}
        animate={{y: 0, opacity: 1}}
        transition={{duration: time, delay}}
        mb={6}
        fontSize="1.2em"
    >
        {children}
    </MotionDiv>
)

export default Section
