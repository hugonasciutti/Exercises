--Exercícios e testes

{-
Escreva uma função que recebe duas listas de inteiros e produz uma lista de listas. Cada uma corresponde à multiplicação de um elemento da primeira lista por todos os elementos da segunda.
Exemplo:
> mult_listas [1,2] [3,2,5]
[[3,2,5],[6,4,10]]
-}

--mult_listas :: [Int] -> [Int] -> [[Int]]

--mult_listas x y = [ [x*(y!!el)] | el <- [0..(length x)], x<-x, y <- y ]

--mult_listas x y = [ x*y | posx <- [0..(length x)], posy <- [0..(length y)], posx < posy]

--mult_listas x y = [ [[x*y],[x*y]] | posx <- [0..(length x)], y <- y, posx < (length y)]

--mult_listas x y = [ [x*y | x<-x] | y<-y, x*y /= (x*(last [y])

--mult_listas x y = [ [x*y | x<-x] | y<-y] 
        --[[3,6],[2,4],[5,10]]
        
--mult_listas x y = [ [x*y | x<-x] | y<-y, posy <- [0..(length [y])], posy /= (length [y]), posx <- [0..(length [x])], posx () , ] 



--[ [ x | x <- [0..5], even x] | x <- [6..15], x `mod` 4 /= 0 ]


--tupla :: (Int,Int) -> (Int,Int)
--tupla (x,y) = (x,y)
dup x = x+x

