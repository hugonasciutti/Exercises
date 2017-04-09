#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

/*
  8. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
  números naturais de 0 até N em ordem decrescente.
*/

int decrescente(int N, int N0){
	if(N == 0){
		printf("N: %d\n", N0);
		return 0;
	}else{
		printf("N: %d\n", N0);
		return decrescente(N-1, N0+1);
	}
}


int main(){
	setlocale(LC_ALL, "");

	decrescente(11, 0);

    return 0;
}

