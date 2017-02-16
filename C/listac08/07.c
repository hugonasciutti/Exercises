#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  7. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
  números naturais de 0 até N em ordem crescente.
*/

int crescente(int N){
	if(N==0){
		printf("N: %d\n", N);
		return 0;
	}else{
		printf("N: %d\n", N);
		return crescente(N-1);
	}
}


int main(){
	setlocale(LC_ALL, "");

	crescente(11);

    return 0;
}

