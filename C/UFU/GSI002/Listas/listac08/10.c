#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  10. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos
      os números pares de N em ordem decrescente.
*/

int paresd(int n){
    if(n < 0){
        return 0;
    }
    else{
        if(n%2 == 0){
            printf("%d\n",n);
            return paresd(n-1);
        }
        else{
            return paresd(n-1);
        }
    }
}

int main(){
	setlocale(LC_ALL, "");
    
    int x;

    scanf("%d",&x);

    printf("\t###Pares decrescente###\n");

    paresd(x);

    return 0;
}

