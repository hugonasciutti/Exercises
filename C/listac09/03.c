#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//3.

int main(){

    int a, b, *x, *y;

    x = &a;
    y = &b;

    printf("x: ");
    scanf("%d", &a);

    printf("y: ");
    scanf("%d", &b);

    if(x > y)
        printf("x(&a) > y(&b) | *x = %d", *x);
    else
        printf("y(&b) > x(&a) | |*y = %d", *y);

    return 0;
}
