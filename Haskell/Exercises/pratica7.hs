import Data.Char
{---------------------------------------------------------------------------------
1. Seja a função map implementada no módulo Prelude. Primeiramente vamos
observar o uso da função map, que define a aplicação de uma outra função
(que tenha a propriedade de transformação) a todos os elementos de uma
lista. Execute os exemplos abaixo:

> map (++"ana") ["mari", "juli", "lili"]
["mariana","juliana","liliana"]

> map (^3) [4,5,3,6]
[64,125,27,216]

-}





{---------------------------------------------------------------------------------
 2. Nos exercícios a seguir, escreva primeiramente uma função recursiva. 
    Em seguida, reescreva essa função utilizando a função de ordem superior
    mapear, vista em aula e apresentada a seguir. Não utilize a função nativa map.

mapear::(a->a)->[a]->[a]
mapear f [] = []
mapear f (a:ax) = f a : mapear f ax
-}
mapear :: (a -> b) -> [a] -> [b]
mapear f [] = []
mapear f(a:ax) = f a : mapear f ax 

--(a) Função dobros :: Num a => [a] -> [a] que dobra todos os elementos de uma lista.

--Recursão
dobros :: Num a => [a] -> [a]
dobros [] = []
dobros (a:ax) = a * 2 : dobros ax

--Ordem Superior
dobros_sup :: Num a => [a] -> [a]
dobros_sup list = mapear (*2) list

--(b) Função primeiros :: [(a,b)] -> [a] que extrai o primeiro elemento de cada
--tupla-2 dentro de uma lista. Dica: utilize a função fst

--Recursão
primeiros :: [(a,b)] -> [a]
primeiros [] = []
primeiros (a:ax) = fst a : primeiros ax

--Ordem Superior
primeiros_sup :: [(a,b)] -> [a]
primeiros_sup l = mapear (fst) l

--(c) Função maiusculas :: String -> String que converte uma string para outra
--    string com letras maiúsculas. Dica: utilize a função toUpper da biblioteca
--    Data.Char.
maiusculas :: String -> String
maiusculas [] = []
maiusculas l = mapear (toUpper) l

maiusculas_sup :: String -> String
maiusculas_sup (a:ax) = toUpper a : maiusculas ax

--(d) Função hora_em_seg :: [Float] -> [Float] que converte uma lista de horas 
--    em uma lista de segundos.
hora_em_seg :: [Float] -> [Float]
hora_em_seg [] = []
hora_em_seg (a:ax) = (a*60)*60 : hora_em_seg ax

hora_em_seg_sup :: [Float] -> [Float]
hora_em_seg_sup l = mapear (*3600) l

{---------------------------------------------------------------------------------
3. Faça a função ellen, que considera uma lista de strings e devolve uma lista
   dos tamanhos de cada string. Utilize ordem superior.
   
*Main > ellen [“aula”,”de”,”programacao”]
[4,2,11]

-}
ellen :: [String] -> [Int]
ellen l = mapear length l