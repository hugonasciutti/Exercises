#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  9. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos
      os números pares de N em ordem crescente.
*/

int pares(int n, int m){
    if(m > n){
        return 0;
    }else{
        if(m%2 == 0){
            printf("%d\n",m);
            return pares(n,m+1);
        }else{
            return pares(n,m+1);
            }
    }
}

int main(){
	setlocale(LC_ALL, "");

	int x;

    scanf("%d",&x);

    printf("\t###Pares crescente###\n");

    pares(x,0);

    return 0;
}

