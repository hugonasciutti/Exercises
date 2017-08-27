#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//2.

int main(){

    int x,y;

    if(&x > &y){
        printf("&x > &y | %x > %x\n", &x,&y);
    }else
    {
        printf("&y > &x | %x > %x\n", &y,&x);
    }


    return 0;
}
