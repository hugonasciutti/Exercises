Revisão
=======

Certo ou errado
---------------

char i = 10;


Quantas vezes "olá" será impresso?
----------------------------------

for (i = 200; i > 0; i--)
   printf ("olá\n");


Tipos Primitivos
----------------

char	1 byte		-128..127

int	4 bytes		-2.147.483.648..2.147.483.647

float 	4 bytes		7 dígitos de precisão 10**-38..10**38

double	8 bytes		15 dígitos de precisão 10**-4932..10**4932

void	-		-


Modificadores
-------------
unsigned (todos*)	* exceto void
short int
const (todos*)


Tipos Complexos
---------------

struct aluno
{
   unsigned int mat;
   char nome[50];
}
typedef struct aluno Aluno;

int
main ()
{
   Aluno a = { 10, "Autran Macedo" };
   printf ("%d %s\n", a.mat, a.nome);
   return 0;
}


Exercício 1
-----------

Criar um programa que responda a seguinte pergunta: onde ocorreu o dia mais frio? Apresentar a resposta na tela do computador (stdout).

Uma coleção com 5 registros de temperatura está armazenada em um único vetor (rt). Cada registro de temperatura (regTemp) é composto pela temperatura (temp) e o nome da cidade (20 caracteres sem espaço) onde ocorreu tal temperatura.

Um usuário insere registros na coleção via teclado (stdin). Um exemplo de registros inseridos segue abaixo:

15.3 Uberlândia
-5.0 Gramado
6.0 Chapecó
23.2 Recife
28.0 Natal

Uma solução para o Exercício 1
------------------------------

// Apresenta a cidade com menor registro de temperatura
//
// by Autran Macedo 2017

#include <stdio.h>

struct regTemp
{
   float temp; 		// temperatura
   char  cidade[20];	// nome da cidade onde ocorreu a temp
};
typedef struct regTemp RegTemp;

int
main ()
{
   int i = 0;
   RegTemp rt[5]; // guarda regisros de temperatura
   int menor = 0; // guarda posição em rt que possui a menor temp

   for (i = 0; i < 5; i++)
   {
      scanf ("%f %s", &rt[i].temp, rt[i].cidade);
      if (rt[i].temp < rt[menor].temp)
         menor = i;
   }

   printf ("%4.1f %s\n", rt[menor].temp, rt[menor].cidade);

   return 0;
}


Boa prática de programação
--------------------------
* Adote um padrão de codificação (gnu coding standard).

* Inicie todas as variáveis.


Pergunta com relação à solução do Exercício 1
---------------------------------------------

Há como passar para o programa um arquivo contendo os registros de temperatura? Em tempo: sem modificar o programa.

Sim!

Crie um arquivo do tipo texto com os registros de temperatura; um registro por linha.

Considere que: (a) o nome do arquivo de registros de temperatura seja registro-temp.txt; (b) o nome do arquivo que contém o código executável (binário) da solução do exercício 1 seja rt.exe.

Assim, inicie a excução do programa rt.exe exatamente tal como abaixo

./rt.exe < registro-temp.txt


Boa prática de programação
--------------------------
* Evite constantes núméricas.

#define MAXCID 20
#define MAXRT 5

struct regTemp
{
   float temp; 		// temperatura
   char  cidade[MAXCID];// nome da cidade onde ocorreu a temp
};

int
main ()
{
   ...
   RegTemp rt[MAXRT]; // guarda regisros de temperatura
   int menor = 0; // guarda posição em rt que possui a menor temp

   for (i = 0; i < MAXRT; i++)
   ...
}



Exercício 2
-----------
Criar um programa para resolver o seguinte problema: qual é o item cuja descrição possui a menor quantidade de caracteres? Apresentar a resposta na tela do computador (stdout).

Um item é constituído por uma identificação (id) numérica > 0 e uma descrição (descr) de no máximo 20 caracteres sem espaço em branco. Há uma coleção de 5 itens; cada item é colocado na coleção via teclado (stdin) por um usuário. Um exemplo segue abaixo:

23 bola

5 bau

13 caneta

12 lapis

7 regua



A coleção é armazenada em um único vetor.

Solução do Exercício 2
----------------------

... para discussão na próx. aula ...
