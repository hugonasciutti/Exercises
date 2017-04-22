/*
   1) Cria uma lista implementada por vetor, cujo tamanho é informado em tempo de exec.
   2) Apresenta a quantidade de itens no vetor.
   3) Destrói a lista.
   
   Por Autran Macedo
*/

#include <stdio.h>
#include <stdlib.h>

struct item
   {
      int id;
      char * nome;
   };

typedef struct item Item;

Item * create (int);
int count (Item *, int);
void destroy (Item *);


int
main ()
{
   Item *l; // lista de itens
   int t;   // tamanho da lista
   int n;   // qtde de itens da lista

// captura o tamanho da lista
// --------------------------
   printf ("tamanho da lista\n");
   scanf ("%d", &t);

// cria a lista
// ------------
   l = create (t);
   if (l == NULL)
   {
      printf ("lista não criada");
      return (2);
   }

// apresenta a qtde de itens na lista
// ----------------------------------
   n = count (l, t);
   printf ("tamanho da lista = %d\n", t);
   printf ("qtde de itens = %d\n", n);

// destroi a lista
// ---------------
   destroy (l);

   return (0);
}

/*
   create
   ------
   Return a list of t Items.

   All t Items have id iniatialized with zero.
*/
Item *
create (int t)
{
   Item *l; // lista
   int i;

   l = (Item *) malloc (t * sizeof (Item));

   for (i = 0; i < t; i++)
      l[i].id = 0;

   return l;
}

/*
   count
   -----
   Return the number of Itens in l.

   l has max size = t

*/
int
count (Item *l, int t)
{
   int i = 0;

   while (l[i].id > 0)
      i++;

   return i;
}

/*
   Destroy
   -------
   Destroy the list l.
*/
void
destroy (Item *l)
{
   free (l);
}
