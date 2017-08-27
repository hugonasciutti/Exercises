#include <stdio.h>
#include <stdlib.h>

/*
  26. Faça um algoritmo que receba um número inteiro positivo n e calcule o somatório de 1
  	  até n.
*/

int algorithm(int n){
	int i=0;
	int S=0;
	for(i=1; i<=n; i++){
		S+=i;
	}
	return S;
}

int main(){

	printf("Insira N: ");
	int N;
	scanf("%d", &N);

	printf("algorithm: %d\n", algorithm(N));

	return 0;
}