import { useEffect, useState } from 'react'
import Layout from '../../components/layouts/child';
import { Container, Box } from '@chakra-ui/react'
import myModule from '../../public/wasm/hello.js'

const PixCell = () =>
{
    const [result, setResult] = useState('');

    useEffect(() => {
        window.scrollTo(0, 0)
    });
    
    useEffect(() => {
        // Initialize the Wasm module
        myModule().then(module => {
            console.log(module);
            console.log(Object.keys(module));
            // Call the Wasm function and update the result state
            setResult(module.myWasmFunction());
        });
    }, []);

    return (
        <Layout>
            <Container maxW="container.md">
                <Box display={{md:"flex"}} mt={6}>
                    <div>
                        WASM Test: {result}
                    </div>
                </Box>
            </Container>
        </Layout>
    )
}

export default PixCell
