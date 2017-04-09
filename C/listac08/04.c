#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//4

int elevar_n(int k, int n){
    if(n==1){
        return 1;
    }else{
        return k * elevar_n(k, n-1);
    }
}


int main(){

    int n = 3;
    int k = 3;
    printf("Elevar_n %d: %d", n, elevar_n(k,n));

    return 0;
}
