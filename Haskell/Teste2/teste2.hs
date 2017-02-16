{-
1. Faça uma função receba uma lista de inteiros e devolva o penúltimo
elemento dela. A lista tem tamanho n, n > 2.
Obs: Utilize a função reverse.
-}

func1 :: [Int] -> [Int]
func1 x = [reverse x !! 1]

{-
    Questão 1
    
Main> func1 [1,2,3,4,5,6,7,8,9]
[8]

Main> func1 [9,8,7,6,5,4,3,2,1]
[2]

-}

--------------------------------------------------------------------

{-
2. Faça uma função que receba uma lista de inteiros. Se o comprimento dela for par, duplique-a; se for impar, triplique-a. Exemplo:
    Entrada: multiplicaLista [1,2,3]
    Saída: [1,2,3,1,2,3,1,2,3]

    Entrada: multiplicaLista [1,2,3,4]
    Saída: [1,2,3,4,1,2,3,4]
-}

func2 :: [Int] -> [Int]
func2 x
    | mod (length x) 2 == 0 = x++x
    | mod (length x) 2 /= 0 = x++x++x
    | otherwise = [0]
  
{-
    Questão 2
    
Main> func2 [1,2,3,4,5]
[1,2,3,4,5,1,2,3,4,5,1,2,3,4,5]

Main> func2 [1,2,3,4,5,6]
[1,2,3,4,5,6,1,2,3,4,5,6]

-}
  
--------------------------------------------------------------------
{-
3. Seja a seguinte equação do segundo grau:
ax² + bx + c = 0
sendo que a, b e c são números reais e a ≠ 0. Essa equação tem:
• Duas raízes reais, se b² > 4ac;
• Uma raiz real, se b² = 4ac; e
• Nenhuma raiz real, se b² < 4ac.
Faça uma função que, dados três coeficientes a, b, e c, diz quantas raízes a equação tem.
-}

func3 :: Float -> Float -> Float -> String
func3 a b c 
    | (a /= 0) && (b*b > 4*a*c) = "Duas raizes reais"
    | (a /= 0) && (b*b == 4*a*c) = "Uma raiz real"
    | (a /= 0) && (b*b < 4*a*c) = "Nenhuma raiz real"
    | otherwise = "Erro ou a=0"
    
    
    
{-
    Questão 3

Main> func3 1 10 1
"Duas raizes reais"

Main> func3 4 4 1
"Uma raiz real"

Main> func3 4 1 4
"Nenhuma raiz real"

-}

--------------------------------------------------------------------
    
{-
4. Faça uma função que devolva o quadrado de um número, se ele for primo; ou zero, caso contrário.
    Entrada: 7
    Saída: 49
    
    Entrada: 6
    Saída: 0
-}

func4 :: Int -> Int
func4 x = if length ([ x | x1 <- [1..x], mod x x1 == 0]) == 2 then x*x else 0

{-
    Questão 4
    
Main> func4 1
0
Main> func4 2
4
Main> func4 3
9
Main> func4 4
0
Main> func4 5
25

-}

--------------------------------------------------------------------

{-
5. Implemente uma função chamada modiv que, a partir dos dois
argumentos x e y, com y > x, ambos passados pelo usuário, dê como
resultado as seguintes informações:
• Parte inteira da divisão de y por x. Utilize para isso a função nativa div.
• Resto da divisão de y por x.
• y elevado a x
• Uma lista com os elementos entre x e y.
	• Exemplo: Para x = 2 e y = 6, deve ser retornado [2,3,4,5,6].
• Uma lista com os elementos múltiplos de x que estejam entre x e y (incluindo ele mesmo).
	• Exemplo: Para x = 4 e y = 14, deve ser retornado [4,8,12].
As informações acima devem ser retornadas na forma de tupla. Isto é,
sua função deve retornar conforme o exemplo abaixo.
	Entrada: 4 14
	Saída: (3, 2, 38416, [4,5,6,7,8,9,10,11,12,13,14], [4,8,12])
-}


modiv :: Int -> Int -> (Int, Int, Int,[Int],[Int])
modiv x y = (div y x, mod y x, y^x, [x | x <- [x..y]], [x1 | x1 <- [x..y], mod x1 x == 0])
  
  







