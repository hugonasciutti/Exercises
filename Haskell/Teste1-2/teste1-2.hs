--Rodrigo Souza Rezende 11621bsi245
--Matheus Santiago Neto 11621bsi252
--Hugo Sousa Nasciutti 11621bsi260


remover :: Char -> String -> String
remover a [] = []
remover a (x:xs)
 | x == a = remover a xs
 | otherwise = x: remover a xs
 
insere :: Int -> [Int] -> [Int]
insere n [] = []
insere n(x:xs)
 |x < n = x:insere n xs
 |x == n = insere n xs 
 |otherwise = n:x:xs
 
substituir_todos :: Int -> Int -> [Int] -> [Int]
substituir_todos n y [] = []
substituir_todos n y(x:xs)
 |x == n = y:substituir_todos n y xs
 |otherwise = x:substituir_todos n y xs

