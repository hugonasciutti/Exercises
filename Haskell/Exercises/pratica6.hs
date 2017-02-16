
----1

--1a
comprimento :: [Int] -> Int
comprimento [] = 0
comprimento (_:xs) = 1 + comprimento xs
--

--b
somatorio :: [Int] -> Int
somatorio [] = 0
somatorio (x:xs) = x + somatorio xs

--c
soma_impares :: [Int] -> Int
soma_impares [] = 0
soma_impares (x:xs)
	| mod x 2 /= 0 = x + soma_impares xs
	| otherwise = soma_impares xs

--d
ultimo :: String -> Char
ultimo [x] = x
ultimo (_:xs) = ultimo xs 

--e
impares :: [Int] -> Bool
impares [] = True
impares (x:xs)
	| mod x 2 == 0 = False
	| otherwise = impares xs
	
--f
soma_mult :: Int -> [Int] -> Int
soma_mult n [] = 0
soma_mult n (x:xs)
	| mod x n == 0 = x + soma_mult n xs
	| otherwise = soma_mult n xs
	
--g
insere :: Int -> [Int] -> [Int]
insere n [] = []
insere n (x:xs)
	| x < n = x:insere n xs
	| otherwise = n:x:xs
	
--Inserindo na última posição
insere :: Int -> [Int] -> [Int]
insere n [] = n:[]
insere n (x:xs)
	| x < n = x:insere n xs
	| otherwise = n:x:xs

--insere :: Int -> [Int] -> [Int]
--insere n [] = []
--insere n (x:xs)
--	| x > n = n:x:xs
--	| otherwise = x:insere n xs

----END



