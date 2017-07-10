/*
   Este arquivo contém a implmentação das operações sobre lista de itens; a lista é implementada com vetor.

   Item está definido no arquivo "item.h".

*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// === globais ===
   int N; // quantidade de itens na lista
   int T; // tamanho da lista
   Item const NOTFOUND = { -1, NULL };

// === count ===
int
count (Item *l)
{
   return N;
}

// === create ===
Item *
create (int t)
{
   N = 0;
   return (Item *) malloc (t * sizeof (Item));
}

// === delete ===
int
delete (Item *l, Item i)
{
   int j;

   for (j = 0; j < N; j++)
      if (l[j].id == i.id)
      {
         free (l[j].nome);
         l[j] = l[--N];
         return i.id;
      }
   return 0;
}

// === Destroy ===

void
destroy (Item *l)
{
   int i;

   for (i = 0; i < N; i++)
      free (l[i].nome);

   free (l);
}

// === find ===
Item
find (Item *l, int k)
{

   int i = 0;

   for (i = 0; i < N; i++)
      if (l[i].id == k)
         return l[i];

   return NOTFOUND;
}

// === insert in position N ===
int
insert (Item *l, Item i)
{
   if (N == T)
      return (-1); // lista cheia

   l[N++] = i;

   return N;
}

// === insert in position p ===
int
insertp (Item *l, Item i, int p)
{
   if (N == T)
      return (-1); // lista cheia

   if (p > N)
      return (-2); // fora da lista

   l[N++] = l[p];
   l[p] = i;

   return N;
}

// === selectp ===
Item
selectp (Item *l, int p)
{  
   if (p > N)
      return NOTFOUND; // fora da lista

   return l[p];
}

// === showAll ===
void
showAll (Item *l)
{
   int i;

   for (i = 0; i < N; i++)
      printf ("%d %s\n", l[i].id, l[i].nome);

}

// === sort ===
void
sort (Item *l)
{
   int i, j;
   int min; // guarda posição do menor numero
   Item t;

   for (i = 0; i < N; i++)
   {
      min = i;
      for (j = i + 1;  j < N; j++)
         if (l[j].id < l[min].id)
            min = j;

      t = l[i];
      l[i] = l[min];
      l[min] = t;
   }
}
