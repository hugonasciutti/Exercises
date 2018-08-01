module.exports = {
	env: {
		browser: true,
		es6: true
	},
	settings: {
		'import/resolver': "webpack"
	},
	extends: ["airbnb", "plugin:jest/recommended"],
	parserOptions: {
		ecmaFeatures: {
			jsx: true
		},
		ecmaVersion: 2018,
		sourceType: "module"
	},
	plugins: [
		"react"
	],
	rules: {
		'object-curly-newline': "off",
		'import/no-named-as-default-member': "off",
		'react/forbid-prop-types': "off",
		'import/no-named-as-default': "off",
		'implicit-arrow-linebreak': "off",
		indent: [
			"error",
			2
		],
		'linebreak-style': [
			"error",
			"unix"
		],
		quotes: [
			"error",
			"single"
		],
		semi: [
			"error",
			"never"
		]
	}
}