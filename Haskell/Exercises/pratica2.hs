--1.Mostre os resultados das seguintes expressões:

--1.1 / > [1,2,3,4] ++ [9,10,11,12]
con :: [Int] -> [Int] -> [Int]
con x y = x++y

--1.2 / > "hello" ++ " " ++ "world"
sayhello :: String -> String -> String
sayhello x y = x ++ y

--1.3 / > 5:[1,2,3,4,5]
incluir :: Int -> [Int] -> [Int]
incluir x y = x:y

--1.4 / > [[1,2,3,4],[5,3,3,3],[1,2,2,3,4],[1,2,3]] ++ [[1,1,1,1]]
--conlista :: [Integer] -> [Integer] -> [Integer]
--conlista x y = x++y

--1.5 / [9.4,33.2,96.2,11.2,23.25] !! 1
posicao_n :: [Float] -> Int -> Float --2° Argumento deve ser do tipo Int vide propósito do argumento
posicao_n x y = x !! y --x = Lista e y = Posição

--1.6 / head [5,4,3,2,1] -- Apenas o primeiro elemento da lista é retornado
funchead :: [Integer] -> Integer
funchead x = head x

--1.7 / tail [5,4,3,2,1] -- Retorna o corpo da lista
functail :: [Integer] -> [Integer]
functail x = tail x


{-2. Qual o resultado das expressões a seguir? Justifique.
> snd (fst ((True, 4), "Bom"))
 1° Passo: 1ª Lista é ((True, 4), "Bom")) que retorna (True, 4)
 2° Passo: 2° Elemento da Lista (True, 4) é 4
Hugs> snd(fst((True, 4), "Bom"))
4
 
> fst ((True, 'a'), 7)
Hugs> fst ((True, 'a'), 7)
(True,'a')

>snd (snd ((True, 4), (False, 7)))
Hugs> snd (snd ((True, 4), (False, 7)))
7
-}



{-
3. Implemente uma função que receba o primeiro e o último nome de alguém e retorne suas iniciais em uma tupla. Por exemplo: 
    > iniciais "Sara" "Luzia" 
    ('S','L')
-}
e3 :: String -> String -> (Char,Char)
e3 x1 x2 = (head(x1),head(x2))

{-
4. Faça uma função que receba o nome de um aluno e uma lista com suas três notas. A função deve então devolver uma tupla com o nome do aluno e a média das notas. Exemplo:

> aprovado "Joao" [80, 60, 100]
("Joao", 80)
-}

e4 :: String -> [Float] -> (String, Float)
e4 nome notas = (nome, sum notas / 3)
--al_media nome notas = (nome, sum notas / fromIntegral(length notas)) --Para uma média perfeita que conta quantos elementos uma lista possui e retorna um número inteiro para a divisão.

{-
5. Diga quais são os tipos das seguintes expressões:

a) False
b) (["foo", "bar"], 'a')
c) [(True, []), (False, [['a']])]
d) 2.5
e) (1, 1.5, 2.5, 10)

Hugs> :type False
False :: Bool

Hugs> :type (["foo", "bar"], 'a')
(["foo","bar"],'a') :: ([[Char]],Char)

Hugs> :type [(True, []), (False, [['a']])]
[(True,[]),(False,[['a']])] :: [(Bool,[[Char]])]

Hugs> :type 2.5
2.5 :: Fractional a => a

Hugs> :type (1, 1.5, 2.5, 10)
(1,1.5,2.5,10) :: (Num a, Fractional b, Fractional c, Num d) => (d,c,b,a)

-}


{-
6. Crie as seguintes funções em Haskell definindo corretamente os tipos de dados.

a) Função para calcular a média de 4 números em ponto flutuante.
b) Função soma de 3 números inteiros.
c) Função que retorne a raiz quadrada de um número real. Utilize a função sqrt para o cálculo da raiz.
-}

e6a :: Float -> Float -> Float -> Float -> Float
e6a x1 x2 x3 x4 = (x1+x2+x3+x4)/4

e6b :: Int -> Int -> Int -> Int
e6b x1 x2 x3 = x1+x2+x3

e6c :: Float -> Float
e6c x1 = sqrt(x1)

{-
7. Defina uma lista por compreensão onde cada posição é uma tupla (x,y), com x < y, assumindo x como valores pertencentes à lista [1,3,5] e y pertencente a [2,4,6].
-}

e7 :: [(Int,Int)]
e7 = [(x,y) | x<-[1,3,5], y<-[2,4,6], x<y]

{-
8. Defina a lista abaixo por compreensão:
[0,3,6,9,12,15]
-}

e8 :: [Int]
e8 = [x | x<-[0,3..15]]










