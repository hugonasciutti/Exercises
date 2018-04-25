import numbro from 'numbro'
import ptBR from 'numbro/languages/pt-BR'

const language = getLanguage()

const supported = { 'pt-BR': ptBR }

const culture = supported[language]

export default numbro.culture('pt-BR', ptBR)
