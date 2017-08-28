/*
Revisão
-------
Apresenta o menor número entre 5 números inseridos pelo usuário e também os apresenta na ordem inversa de captura.

A inserção de números e a apresentação dos mesmos ocorrem na entrada e saída padrões, respectivamente.

Autran Macedo
2017
*/

#include <stdio.h>

int
main ()
{
   int i;
   int n[5]; // guarda os números
   int menor; // guarda posição do menor número

// captura os números
// ------------------
   for (i = 0; i < 5; i++)
      scanf ("%d", &n[i]);

// detecta o menor número
// ----------------------
   menor = 0;
   for (i = 1; i < 5; i++)
      if (n[i] < n[menor])
         menor = i;

// apresenta o menor número
// ------------------------
   printf ("Menor número = %d\n\n", n[menor]);

// apresenta os números na ordem inversa da captura
// ------------------------------------------------
   printf ("Números na ordem inversa = ");
   i = 5;
   while (--i >= 0)
      printf ("%d ", n[i]);
   printf ("\n");

   return (0);
}
