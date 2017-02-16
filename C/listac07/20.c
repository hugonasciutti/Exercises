#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
20. Faça um algoritmo que receba um número inteiro positivo n e calcule o seu fatorial, n!.
*/

int fatorial(int n);

int main(){

	setlocale(LC_ALL, "");
	int n;
	printf("Insira N!: ");
	scanf("%d", &n);
	n = abs(n);
	printf("Fatorial de %d! é: %d\n", n, fatorial(n));


	return 0;
}

int fatorial(int n){

	int i=0;
	for(i=n; i>1; --i){
		n *= i-1; 
	}

	return n;
}