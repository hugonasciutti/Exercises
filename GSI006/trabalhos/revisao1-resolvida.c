/*
Revisão
-------
Apresenta o item que possui o menor id. Apresenta também todos os itens na ordem inversa daquela inserida pelo usuário.


Um item é composto por um número e uma descrição: o número é o identificador (id) do item; a descrição é um string de 20 caracteres, que é utilizado para dar nome ao item.


A quantidade de itens é definida pelo usuário em tempo de execução.

A inserção da quantidade dos itens e dos itens em si, e a apresentação dos mesmos ocorrem na entrada e saída padrões, respectivamente.

Autran Macedo
2017
*/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
   struct item
   {
      int num;
      char *nome;
   };

   int i;
   int max;        // qtde máxima de itens
   struct item *p; // guarda os itens
   int menor;      // guarda posição do item com menor id

// captura a quantidade de máxima de itens
// ---------------------------------------
   printf ("Quantidade de itens\n");
   scanf ("%d", &max);
   printf ("/n");

// Aloca o vetor
// -------------
   p = (struct item *) malloc (max * sizeof(struct item));
   if (p == NULL)
      return (2);

// captura os números e nomes
// --------------------------
   printf ("Insira %d itens\n", max);

   for (i = 0; i < max; i++)
   {
      p[i].nome = (char *) malloc (20);
      if (p[i].nome == NULL)
         return (4);

      scanf ("%d %s", &p[i].num, p[i].nome);
   }

// detecta o menor número
// ----------------------
   menor = 0;
   for (i = 1; i < max; i++)
      if (p[i].num < p[menor].num)
         menor = i;

// apresenta item com menor id
// ---------------------------
   printf ("\nItem com menor id = %d %s\n\n", p[menor].num, p[menor].nome);

// apresenta os itens na ordem inversa da captura
// ----------------------------------------------
   printf ("Números na ordem inversa\n");
   i = max;
   while (--i >= 0)
      printf ("%d %s\n", p[i].num, p[i].nome);
   printf ("\n");

   return (0);
}
