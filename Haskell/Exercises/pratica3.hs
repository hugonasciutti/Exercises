{-
1. Faça uma função que receba o nome de um aluno e uma lista com suas três notas. A função deve então devolver uma tupla com o nome do aluno e a média das notas. Exemplo:

    > aprovado "Joao" [80, 60, 100]
    ("Joao", 80)
-}

e4 :: String -> [Float] -> (String, Float)
e4 nome notas = (nome, sum notas / 3)
{-
al_media nome notas = (nome, sum notas / fromIntegral(length notas)) 

-- Para uma média perfeita que conta quantos elementos uma lista possui e retorna um número inteiro para a divisão.
-}



{-
2. Diga quais são os tipos das seguintes expressões:
    a) False
    Main> :type False
    False :: Bool

    b) (["foo", "bar"], 'a')
    Main> :type (["foo", "bar"], 'a')
    (["foo","bar"],'a') :: ([[Char]],Char)

    c) [(True, []), (False, [['a']])]
    Main> :type [(True, []), (False, [['a']])]
    [(True,[]),(False,[['a']])] :: [(Bool,[[Char]])]

    d) 2.5
    Main> :type 2.5
    2.5 :: Fractional a => a

    e) (1, 1.5, 2.5, 10)
    Main> :type (1, 1.5, 2.5, 10)
    (1,1.5,2.5,10) :: (Num a, Fractional b, Fractional c, Num d) => (d,c,b,a)
-}




{-
3. Crie as seguintes funções em Haskell definindo corretamente os tipos de dados.

    a) Função para calcular a média de 4 números em ponto flutuante.
    b) Função soma de 3 números inteiros.
    c) Função que retorne a raiz quadrada de um número real. Utilize a função sqrt para o cálculo da raiz.
-}

e3a :: Float -> Float -> Float -> Float -> Float
e3a x1 x2 x3 x4 = (x1+x2+x3+x4)/4

e3b :: Int -> Int -> Int -> Int
e3b x1 x2 x3 = x1+x2+x3

e3c :: Float -> Float
e3c x1 = sqrt(x1)




{-
4. Usando as funções head e tail, defina a função terceiro que devolve o terceiro elemento de uma lista de inteiros. Exemplo:
    > terceiro [1,2,5,6,7]
    5
-}

terceiro :: [Int] -> Int
terceiro [a,b,c,d,e] = head(tail(tail[a,b,c,d,e]))




{-
5. Defina uma lista por compreensão onde cada posição é uma tupla (x,y), com x < y, assumindo x como valores pertencentes à lista [1,3,5] e y pertencente a [2,4,6].
-}

e5 :: [(Int,Int)]
e5 = [(x,y) | x<-[1,3,5], y<-[2,4,6], x<y]




{-
6. Defina as listas abaixo por compreensão:
    a) [1,2,3,4,5,6,7,8,9,10]
    b) [2,4,6,8,10,12,14,16,18,20]
    c) [12,14,16,18,20]
    d) [0,3,6,9,12,15]
    e) [50,52,54,56,58,60]
    f) Uma lista com elementos de 10 a 20, exceto os números 13, 15 e 19.
-}

e6a :: [Int]
e6a = [ x | x <- [1..10]]

e6b :: [Int]
e6b = [ x | x <- [2,4..20]]

e6c :: [Int]
e6c = [ x | x <- [12,14..20]]

e6d :: [Int]
e6d = [ x | x <- [0,3..15]]

e6e :: [Int]
e6e = [ x | x <- [50,52..60]]

e6f :: [Int]
e6f = [ x | x <- [10..20], x /= 13, x /= 15, x /= 19]
















