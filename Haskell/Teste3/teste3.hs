import Data.Char

-- Matheus Santiago Neto -- 11621BSI252
-- Rodrigo Souza Rezende -- 11621BSI245
-- Hugo Sousa Nasciutti  -- 11621BSI260

{---------------------------------------------------------------------------------
1. Faça uma função que devolva a mesma lista de strings recebida na entrada, exceto
   que as letras em cada palavra ficarão invertidas entre maiúsculas e minúsculas. Por
   exemplo, onde tem ‘e’ troque por ‘E’, onde tem ‘E’ troque por ‘e’, e assim por diante.
   
Dica: Para inverter um caractere, veja como ele está atualmente (funções isUpper e
isLower da biblioteca Data.Char) e altere-o (funções toUpper e toLower, também da Data.Char).

Exemplo:
*Main> inverte ["AUla","de","progrAMACao"]
["auLA","DE","PROGRamacAO"]
-}

inverter_map :: String -> String
inverter_map [] = ""
inverter_map (x:xs)
 | isLower x == True = toUpper x : inverter_map xs
 | otherwise = toLower x : inverter_map xs

inverte :: [String] -> [String]
inverte lista = map inverter_map lista


{---------------------------------------------------------------------------------
2. Função maior :: Int -> [Int] -> Int que considera um número e o compara com os
   elementos de uma lista. Caso esse número seja maior que todos os elementos da
   lista, ele será retornado pela função. Caso contrário, a função retorna o maior
   elemento da lista. Por exemplo:
   
*Main> maior 18 [3 ,6 ,12 ,4 ,55 ,11]
55
*Main> maior 111 [3 ,6 ,12 ,4 ,55 ,11]
111
-}

maior :: Int -> [Int] -> Int
maior a b = foldr max a b


{---------------------------------------------------------------------------------
3. Faça uma função que devolva uma lista das strings formadas por palavras que se
   iniciem por uma letra específica.
   
*Main> letraEsp 'a' ["bola","arara","casa","abobora"]
["arara","abobora"]
-}

letraEsp_map :: Char -> String -> Bool
letraEsp_map letra word
 | letra == head(word) = True
 | otherwise = False

letraEsp :: Char -> [String] -> [String]
letraEsp letter lista = filter (letraEsp_map letter) lista


{---------------------------------------------------------------------------------
4. Faça uma função que receba um caractere e uma lista de strings e devolva o
   comprimento da maior string que comece com o caractere dado.
   
*Main> maiorComprimento 'e' ["esse","exercicio","eh","simples"]
9
-}

maiorComprimento :: Char -> [String] -> Int
maiorComprimento letra word = foldr (max) 0 (map length word)







