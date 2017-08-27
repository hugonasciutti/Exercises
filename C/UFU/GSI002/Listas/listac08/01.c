#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//1

int somatorio(int x){
    if(x==0){
        return x;
    }else{
        return x + somatorio(x-1);
    }
}

int main(){

    int x = 5;
    printf("Somatorio: %d", somatorio(x));

    return 0;
}


