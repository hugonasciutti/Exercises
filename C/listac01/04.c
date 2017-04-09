#include <stdio.h>

/* 4. Leia um número real e imprima o resultado do quadrado desse número. */

int main(){

	float real;

	printf("Insira um numero real: ");
	scanf("%f", &real);

	real = real * real; //Elevando ao quadrado.

	printf("Numero Real ao quadrado eh: %f\n", real);

	return 0;
}