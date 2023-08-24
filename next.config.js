module.exports = {
    reactStrictMode: true,
    webpack(config) {
        config.module.rules.push({
            test: /\.svg$/,
            use: ['@svgr/webpack']
        })

        config.module.rules.push({
            test: /\.wasm$/,
            type: 'asset/resource'
        })

        return config
    }
}
