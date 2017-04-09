#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


//1.

int main(){
    setlocale(LC_ALL, "");
    int a = 10, *x;
    float  b = 5.4, *y;
    char c = 'a', *z;

    x = &a;
    y = &b;
    z = &c;

    printf("Endereços Antes:\n");
    printf("int x(&a) = %x\t| *x = %d \n", x, *x);
    printf("float y(&b) = %x\t| *y = %f\n", y, *y);
    printf("char z(&c) = %x\t| *z = %c\n\n", z, *z);

    *x = 20;
    *y = 10.8;
    *z = 'b';

    printf("Endereços Depois:\n");
    printf("int x(&a) = %x\t| *x = %d \n", x, *x);
    printf("float y(&b) = %x\t| *y = %f\n", y, *y);
    printf("char z(&c) = %x\t| *z = %c\n ", z, *z);

    return 0;
}
