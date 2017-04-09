import Data.Char
{-------------------------------------------------------------------------------------------------
1. Nos exercícios a seguir, escreva primeiramente uma função recursiva. Em
   seguida, reescreva essa função utilizando função de ordem superior. Você
   pode usar as funções nativas map, filter e foldr.
-}

{- (a) pares :: [Int] -> [Int] que remove todos os elementos ímpares de uma lista. -}

pares_recursao :: [Int] -> [Int] -- Usando Recursão
pares_recursao [] = []
pares_recursao (x:xs)
 | even x = x : pares_recursao xs
 | otherwise = pares_recursao xs
 
pares_sup :: [Int] -> [Int] -- Usando ordem superior.
pares_sup x = filter even x


-- Função filter, usando genérico.

meufilter :: (a -> Bool) -> [a] -> [a] 
meufilter f [] = []
meufilter f (x:xs) 
 | f x = x : meufilter f xs
 | otherwise = meufilter f xs
-- > meufilter even [1,2,3,4,5]
--   [2,4]
 
 
{- (b) Função rm_char :: Char -> String -> String que remove todas as ocorrências de um caractere em uma string. -}

rm_char :: Char -> [Char] -> [Char] -- Recursão
rm_char letra [] = []
rm_char letra (x:xs)
 | letra /= x = x : rm_char letra xs
 | otherwise = rm_char letra xs
 
rm_char_ordem :: Char -> [Char] -> [Char] -- Ordem Superior
rm_char_ordem letra palavra = filter (letra /= ) palavra

 
{- (c) Função acima :: Int -> [Int] -> [Int] que remove todos os números menores ou iguais a um determinado valor. -}

acima :: Int -> [Int] -> [Int]
acima val [] = []
acima val (x:xs)
 | x > val = x : acima val xs 
 | otherwise = acima val xs
 
acima_sup :: Int -> [Int] -> [Int]
acima_sup val lista_num = filter (val <) lista_num

{- (d) Função produto :: Num a=> [a] -> a que computa o produto dos números de uma lista. -}

produto :: Num a => [a] -> a
produto [] = 1
produto (x:xs) = x * produto xs

produto_f :: Num a => [a] -> a
produto_f x = foldr (*) 1 x


{- (e) Função concatena :: [String] -> String que junta uma lista de strings em uma única string. -}
concatena :: [String] -> String
concatena [] = []
concatena (x:xs) = x ++ concatena xs

concatena_f :: [String] -> String
concatena_f x = foldr (++) [] x


{-------------------------------------------------------------------------------------------------
2. Faça a função ssp que considera uma lista de inteiros e devolve a soma dos
   quadrados dos elementos positivos da lista.
-}
ssd :: [Int] -> Int
ssd x = foldr (+) 0 (map (^2) (filter (>0) x))


{-------------------------------------------------------------------------------------------------
3. Defina a função sumsq que considera um inteiro n como argumento e devolve
   a soma dos quadrados dos n primeiros inteiros. Ou seja:
*Main > sumsq 4
30
pois 1² + 2² + 3² + 4² = 30.
-}
sumsq :: Int -> Int
sumsq x = foldr (+) 0 (map (^2) [1..x])


{-------------------------------------------------------------------------------------------------
4. Uma função que devolva o valor da soma dos comprimentos de cada string
   (elemento) da lista. Isto é, a soma total dos comprimentos da lista de entrada.
-}

somaComprimentos :: [String] -> Int
somaComprimentos l = foldr (+) 0 (map length l)


{-------------------------------------------------------------------------------------------------
5. Faça uma função que separe caracteres de números em uma string de
   entrada. O retorno é uma tupla, em que no primeiro argumento esteja a
   sequência de caracteres (string), e no segundo argumento uma sequência de
   inteiros. Dica: Utilize isAlpha e isDigit, presentes em Data.Char.
Por exemplo:
 > separa "aA29bB71"
 ("aAbB ", "2971")
-}

separa :: String -> (String,String)
separa str = (filter isAlpha str, filter isDigit str)

 
 