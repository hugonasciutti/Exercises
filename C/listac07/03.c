#include <stdio.h>
#include <string.h>
#include <math.h>

//3

int verifica(int x);

int main(){

    printf("verifica(10): return %d", verifica(10));

    return 0;
}

int verifica(int x){

    if(x>0){
        return 1;
    }else if(x<0){
        return -1;
    }else if(x==0){
        return 0;
    }

}