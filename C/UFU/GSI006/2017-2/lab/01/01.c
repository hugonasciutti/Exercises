#include <stdio.h>

int main () {
 int i, n[5], menor = 0;

 for (i = 0; i < 5; i++)
    scanf ("%d", &n[i]);

 for (i = 1; i < 5; i++)
    if (n[i] < n[menor])
       menor = i;

 printf ("Menor número = %d\n\n", n[menor]);

 printf ("Números na ordem inversa = ");
 i = 5;
 while (--i >= 0)
    printf ("%d ", n[i]);
 printf ("\n");

 return 0;
}
