#include <stdio.h>
#include <locale.h>

/*
	6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
	   assim como a diferença existente entre ambos.
*/

int main(){
	setlocale(LC_ALL, "");

	int num1=0;
	int num2=0;

	printf("Num 1: ");
	scanf("%d", &num1);

	printf("Num 2: ");
	scanf("%d", &num2);

	printf("A diferença de num1 e num2: %d\n", num1 - num2);


	return 0;
}
