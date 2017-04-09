{-

Hugo Sousa Nasciutti, 11621BSI260
Rodrigo Souza Rezenda, 11621BSI245
 
-}


{-
Exercício 1. Faça uma função que receba uma letra e uma palavra, e retorne a frase
"Comeca com a letra" se a palavra começa com a letra dada e "Nao
comeca com a letra", caso contrário. Exiba a mensagem "Informe uma
palavra" caso a palavra informada seja vazia (""). Exemplo:
Entrada: ‘c’ “casa”
Saída: "Comeca com a letra"
-}

func1 :: Char -> String -> String
func1 letra palavra
	| letra == head(palavra) = "Comeca com a letra"
	| palavra == "" = "Informe uma palavra"
	| otherwise = "Nao comeca com a letra"
	
{-
	Resposta Exercício 1:
	
*Main> func1 'c' "casa"
"Comeca com a letra"

*Main> func1 'd' "casa"
"Nao comeca com a letra"

Main> func1 'c' " "
"Nao comeca com a letra"
-}

--------------------------------------------------------------------

{-
Exercício 2. Faça uma função que receba uma palavra e veja se ela é palíndromo. Um
palíndromo é uma palavra que é escrita da mesma forma quando
analisada de trás para frente. Se a palavra informada pelo usuário for
palíndromo, exiba a frase “[palavra] de tras para frente eh [palavra]”; caso
contrário exiba “Nao eh palíndromo.”. Exemplo:
	Entrada: “arara”
	Saída: “arara de tras para frente eh arara”
Obs: Utilize a função reverse.
-}

func2 :: String -> String
func2 palavra
 | palavra == reverse(palavra) = palavra ++ " de tras para frente eh " ++ reverse(palavra)
 | otherwise = "Nao eh palindromo"
 
{-
	Resposta Exercício 2: 
*Main> func2 "arara"
"arara de tras para frente eh arara"

*Main> func2 "teste"
"Nao eh palindromo"
-} 
 
--------------------------------------------------------------------

{-

Exercício 3. Fornecidos três valores, a, b e c, implemente uma função que retorne
quantos desses três são iguais. A reposta deve ser 3, se todos são iguais;
2, se dois são iguais e um é distinto dos demais ou 0, se todos são
distintos entre si.

-}

func3 :: Int -> Int -> Int -> Int
func3 x y z 
	| (x == y && x == z) = 3 
	| (x == y && x /= z) || (x /= y && x == z) = 2
	| (y /= x && y == z) = 2
	| otherwise = 0
	
{-
	Resposta Exercício 3:
*Main> func3 1 1 1
3
*Main> func3 1 1 0
2
*Main> func3 1 0 1
2
*Main> func3 1 2 3
0
*Main> func3 1 0 0
2

-}

--------------------------------------------------------------------
{-
Exercício 4. Considere a função mesmos que compara duas tuplas, com dois inteiros
cada, e retorna True se ambas as tuplas contém os mesmos números,
independente da ordem. Por exemplo, mesmos (3,4)(4,3) retorna True,
porém mesmos (3,4)(3,5) retorna False.
-}


mesmos :: (Int,Int) -> (Int,Int) -> Bool
mesmos tupla1 tupla2 
        |(fst(tupla1) == fst(tupla2) || fst(tupla1) == snd(tupla2))
                                    && 
         (snd(tupla1) == fst(tupla2) || snd(tupla1) == snd(tupla2))
                                    = True
        | otherwise = False
        
 
 {-
	Resposta Exercício 4
Main> mesmos (1,2) (2,1)
True
Main> mesmos (1,2) (1,2)
True
Main> mesmos (1,2) (1,0)
False
Main> mesmos (1,2) (0,1)
False
 
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  