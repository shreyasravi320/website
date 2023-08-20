module.exports = {
    reactStrictMode: true,
    webpack(config) {
        config.module.rules.push({
            test: /\.svg$/,
            use: ['@svgr/webpack'],
        })

        config.module.rules.push({
            test: /\.wasm$/,
            type: 'webassembly/experimental', // or 'webassembly/async' for newer versions
        })

        return config
    }
}
