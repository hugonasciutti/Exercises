--1
mes :: Int -> String
mes x = if(x==1) then "Janeiro"  else
		if(x==2) then "Fevereiro"else
		if(x==3) then "Marco"    else
		if(x==4) then "Abril"    else
		if(x==5) then "Maio"     else
		if(x==6) then "Junho"    else
		if(x==7) then "Julho"    else
		if(x==8) then "Agosto" 	 else
		if(x==9) then "Setembro" else
		if(x==10)then "Outubro"  else
		if(x==11)then "Novembro" else
		if(x==12)then "Dezembro" else "Error"
		
--2. Faça uma função que receba dois valores e informe o maior. Obs: Utilize guardas.
maior :: Int -> Int -> Int
maior x y
	| x > y = x
	| otherwise = y
	
--3. Faça uma função que receba três valores e informe o maior. Obs: Utilize if/else.
maior_3 :: Int -> Int -> Int -> Int
maior_3 x y z = if(x > y && x > z) then x else
				if(y > z) then y else z
	
--4. Faça uma função que recebe um inteiro e retorna verdadeiro se o número for par. Faça duas implementações, uma com if/else e outra com guardas.
se_par :: Int -> String
se_par x = if(mod x 2 == 0) then "Verdadeiro" else "Falso"

se_par2 :: Int -> String
se_par2 x
	| mod x 2 == 0 = "Verdadeiro"
	| otherwise = "Falso"

--5. Faça uma função que recebe três inteiros x, y e z e imprime “O ultimo numero eh multiplo” caso z seja múltiplo de x ou de z, ou, caso contrário, "O ultimo numero nao eh multiplo de nenhum dos dois". Utilize guardas.
multiplo :: Int -> Int -> Int -> String
multiplo x y z 
	| mod z x == 0 || mod z x == 0 = "O ultimo numero eh multiplo"
	| otherwise = "O ultimo numero nao eh multiplo de nenhum dos dois"

--6. Considere que o preço de uma passagem de avião em um trecho pode variar dependendo da idade do passageiro. Pessoas com 60 anos ou mais pagam apenas 60% do preço total. Crianças até 10 anos pagam 50% e bebês (abaixo de 2 anos) pagam apenas 10%. Faça uma função que tenha como entrada o valor total da passagem e a idade do passageiro e produz o valor a ser pago.
passagem :: Float -> Float -> Float
passagem idade pass = if(idade >= 60) then pass * 0.6 else
					  if(idade <= 10 && idade >=3) then pass * 0.5 else
					  if(idade <= 2)  then pass * 0.1 else pass
					  
--7. Uma empresa decidiu dar a seus funcionários um abono de salário, baseando-se nos pontos obtidos durante o mês, de acordo com a tabela: Faça uma função que informe o abono de salário de um funcionário. Utilize guardas.
abono :: Int -> Int
abono pontos 
	| pontos >= 1  && pontos <= 10 = 100
	| pontos >= 11 && pontos <= 20 = 200
	| pontos >= 21 && pontos <= 30 = 300
	| pontos >= 31 && pontos <= 40 = 400
	| pontos >= 41 = 500
	
	








		
		
		