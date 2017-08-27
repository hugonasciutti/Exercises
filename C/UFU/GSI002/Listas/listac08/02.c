#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//2
int fat(int n){
    if(n==1){
        return n;
    }else{
        return n * fat(n-1);
    }
}

int main(){

    int n =10;

    printf("Fatorial de %d: %d" , n, fat(n));

    return 0;
}
