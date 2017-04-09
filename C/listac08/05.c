#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//5

int fib(int n){
    if(n==0 || n==1){
        return n;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){

    int n = 6;
    printf("Fibonacci %d: %d\n", n, fib(n));


    return 0;
}

