===========
= Revisão =
===========

Exercício 1: alocação dinâmica de memória, busca sequencial
-----------

Criar um programa que um usuário possa realiza diferentes consultas a uma coleção de registros de temperatura: apresentar a resposta na tela do computador (stdout).

Um registro de temperatura é combinação dos seguintes dados: temperatura (número real), nome da cidade (20 caracteres contíguos) onde ocorreu a temperatura e nome da região (15 caracteres contíguos) do país onde está situada a cidade. A coleção de registos está situado em um único vetor (rt).

O tamanho da coleção e os registros de temperatura são informados pelo usuário, em tempo de execução do programa, por meio do teclado (stdin). Um exemplo segue abaixo:

4
15.3 Uberlandia Centro-Oeste
-5.0 Gramado Sul
6.0 Chapeco Sul
23.2 Recife Nordeste

O programa deve apresentar na tela do computador (stdout) as disponíveis ao usuário. Para cada uma das consultas abaixo, apresentar a temperatura, a cidade e a região:

a) cidade com menor registro de temperatura;
b) registro de temperatura de uma cidade;
c) cidade com menor registro de temperatura de uma regiao.


Exercício 2: matriz, arquivo em disco
-----------

Uma empresa automotiva produz dois tipos (X e Y) de veículo em três versões (S, L e SL); a produção desses carros envolve as peças A, B e C. A quantidade de veículos e de peças envolvidas na produção estão expressas nas matrizes abaixo.

  | X | Y                 | S | L | SL
--+---+---              --+---+---+----
A | 4 | 3               X | 2 | 4 | 3
--+---+---              --+---+---+----
B | 3 | 5               Y | 3 | 2 | 5
--+---+---
C | 6 | 2

Qual é a quantidade de peças (A, B e C) utilizadas nos veículos por versão? Em outras palavaras: quantas peças A, B e C são utilizadas nos veículos de versão S?
E na L? E na SL?

Faça um programa que apresente as respostas acima. A resposta é obtida pela multiplicação de matrizes. Considere que os valores de cada matriz está armazenada nos arquivos peça-carro.txt e carro-versão.txt. Nota: estude as funções fopen e fclose.
