--a
comprimento :: [a] -> Int
comprimento [] = 0
comprimento (_:xs) = 1 + comprimento xs

--b
somatorio :: [Int] -> Int
somatorio [] = 0
somatorio (x:xs) = x + somatorio xs

--c
somatorio_impares :: [Int] -> Int
somatorio_impares [] = 0
somatorio_impares (x:xs)
 |mod x 2 /= 0 = x + somatorio_impares xs
 |otherwise = somatorio_impares xs
 
--d
ultimo :: [Char] -> Char
ultimo [a] = a
ultimo (x:xs) 
 |xs /= [] = ultimo xs
 |otherwise = x
 
--e
impares :: [Int] -> Bool
impares [] = False
impares (x:xs)
 |mod x 2 == 0 = False
 |xs == [] && mod x 2 /= 0 = True
 |otherwise = impares xs
 
--f
soma_mult :: Int -> [Int] -> Int
soma_mult _ [] = 0
soma_mult n (x:xs)
 |mod x n == 0 = x + soma_mult n xs
 |otherwise = soma_mult n xs
 
--g
insere :: Int -> [Int] -> [Int]
insere n [] = [n]
insere n (x:xs)
 |n < x = n:(x:xs)
 |otherwise = x:(insere n xs)