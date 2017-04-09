#include <stdio.h>
#include <string.h>
#include <math.h>


int dobro(int x);
int main(){
    int x = 10;
    printf("Dobro de %d: %d\n",x, dobro(x));

    return 0;
}

int dobro(int x){
    return x+x;
}
