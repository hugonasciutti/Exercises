/*
   Este programa faz uso de operacoes sobre listas.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int
main ()
{
   Item i;
   int const MAXNOME = 20; // tamanho maximo do nome do item
   int j, p, t;

   Item *l, x;

   printf ("tamanho da lista = ");
   scanf ("%d", &t);
   printf ("\n");

   l = create (t);

   printf ("insert %d items\n", t);
   for (j = 0; j < t; j++)
   {
      i.nome = (char *) malloc (MAXNOME);
      scanf ("%d %s", &i.id, i.nome);

      p = insertp (l, i, j);
   }

   printf ("\nnumber of item in l = %d\n", count (l));

   printf ("\nshowAll\n");
   showAll (l);

   printf ("\ninserting the last item (again) in position 1\n");
   p = insertp (l, i, 1);

   printf ("\nshowAll\n");
   showAll (l);

   printf ("\nfinding item key = %d\n", i.id);
   x = find (l, i.id);

   printf ("\nfound item = %d %s\n", x.id, x.nome);

   printf ("\nselecting item in position 0\n");
   x = selectp (l, 0);

   printf ("\nremoving item = %d %s\n", x.id, x.nome);
   p = delete (l, x);

   printf ("\ntotal number of items = %d\n", count (l));
   printf ("\nshowAll\n");
   showAll (l);

   printf ("\nsorting the list\n");
   sort (l);
   printf ("showAll\n");
   showAll (l);

   return (0);
}
