#include <stdio.h>
#include <math.h>
#include <stdlib.h>



//3

int elevar(int n){
    if(n == 1){
        return n;
    }else{
        return (n*n*n) + elevar(n-1);
    }
}

int main(){

    int n = 4;

    printf("Elevar %d: %d", n, elevar(n));

    return 0;
}
