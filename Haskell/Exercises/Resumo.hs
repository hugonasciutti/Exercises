import Data.Char

{-Exemplo de montagem de lista
--Obs: é obrigatório o uso de parentêses no primeiro parâmetro.
foldr (+) 0 [1,2,3,4]
foldr (+) 0 (1:(2:(3:(4:[]))))
            (1+(2+(3+(4+0))))
-}

{-Como importar uma biblioteca-}
{-No início do código
import <nome da biblioteca>
import Data.Char
    {Data.Char contém}
        -isAlpha --Verifica se é caracter
        -isDigit --Verifica se é número
        -toUpper --Transforma em maiúsculo
-}

{- Programação em Ordem Superior -}
--Código 
{-Função map-}
mapear :: (a -> b) -> [a] -> [b]
mapear f [] = []
mapear f(x:xs) = f x : mapear f xs

{-Função filter-}
filtrar :: (a -> Bool) -> [a] -> [a]
filtrar p [] = []
filtrar p (x:xs)
    | p x = x : filtrar p xs
    | otherwise = filtrar p xs
    
{-Função foldr-}
--foldr no 2° parâmetro é necessário definir o valor do caso base
reduzir :: (a -> b -> b) -> b -> [a] -> b
reduzir f z [] = z
reduzir f z (x:xs) = f x (reduzir f z xs)

{-//Encerra Programação em Ordem Superior -}
