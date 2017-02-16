#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//4.

int altera(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}
int main(){

    int x,y;

    printf("Insira x: ");
    scanf("%d", &x);
    printf("Insira y: ");
    scanf("%d", &y);
    altera(&x,&y);
    printf("x: %d\ny: %d\n",x,y);

    return 0;
}
