--Função Recursiva
f :: (Int,Int) -> Int
f (n,k) 
	|k == 1 = n
	|k == n = 1
	|1<k && k<n = f(n-1,k-1) + f(n-1,k)
	|otherwise = 0
--

--Correspondência de Padrão
f1 :: (Int, Int) -> Int
f1 (n,1) = n
f1 (n,k) = if k == 1 then 1 else 
		   if (1<k) && (k<n) then f(n-1,k-1) + f(n-1,k) else 0
--

--Função Recursiva
g :: (Int,Int,Int) -> Int
g (n,p,q)
	|n == 0 = 2
	|n == 1 = p
	|n > 1 = p*g(n-1,p,q) - q*g(n-1,p,q)
	|otherwise = 0
--

--Função Recursiva
h :: Int -> Int
h n
	| n == 1 = 1
	| n > 1 = 2*h(n-1)+1
	| otherwise = 0
--

--Correspondência de Padrão
h1 :: Int -> Int
h1 1 = 1
h1 n = if (n>1) then 2*(h1(n-1))+1 else 0
--    

--Função Recursiva
comb :: (Int,Int) -> Int
comb (n,k)
    |k == 1 = n
    |k == n = 1
    |(1 < k) && (k < n) = comb(n-1, k-1) + comb(n-1, 5)
    |otherwise = 0
    
--Obs: Program error: pattern match failure: comb (0,5), sem otherwise;
--

--Correspondência de Padrão
comb1 :: (Int,Int) -> Int
comb1 (n,k) = if (k==1) then n else
              if (k==n) then 1 else
              if (1<k) && (k<n) then comb(n-1, k-1) + comb(n-1, 5) else 0
--

--Função Recursiva        
a :: (Int,Int) -> Int
a (m,n)
    |m==0 = n+1
    |m>0 && n==0 = a(m-1,1)
    |m>0 && n>0 = a(m-1, a(m,n-1))
    |otherwise = 0
--

--Correspondência de Padrão
a1 :: (Int,Int) -> Int
a1 (0,n) = n+1
a1 (m,n) = if(m>0)&&(n==0) then a1(m-1,1) else
           if(m>0)&&(n>0)  then a1(m-1,a1(m,n-1)) else 0
--

--Função Recursiva
soma_mult :: Int -> Int
soma_mult x
    |x==0 = 0
    |x==1 = 0
    |x==2 = 0
    |mod x 3 /= 0 = soma_mult(x-1)
    |mod x 3 == 0 = soma_mult(x-1)+ x + 0
    |otherwise = 999
--

--Correspondência de Padrão
soma_mult1 :: Int -> Int
soma_mult1 x = if x==0 then 0 else
               if x==1 then 0 else
               if x==2 then 0 else
               if mod x 3 /= 0 then soma_mult1(x-1) else
               if mod x 3 == 0 then soma_mult(x-1)+x+0 else 999
--
    