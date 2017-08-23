/*
   Este programa cria um SetOfInt, insere numeros inteiros, e apresenta o conteudo do set.
*/

#include <stdio.h>
#include "set-of-int.h"

int
main ()
{
   int n;

   SetOfInt s1 = create ();
   if (s1 == NULL)
      return -1;

   while ( scanf ("%d", &n) != EOF )
      insert (s1, n);
         

   printf ("\nSet\n");
   showAll (s1);

   return 0;
}
