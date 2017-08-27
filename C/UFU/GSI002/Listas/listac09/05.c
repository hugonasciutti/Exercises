#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes
    2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
    segunda variável. Escreve o conteúdo das 2 variáveis na tela.
*/

int retmaior(int *a, int *b){
	int *tmp;
	if(*a > *b)
		return *a;
	else{
		*tmp = *a;
		*a = *b;
		*b = *tmp;
		return *b;
	}
}

int main(){
	setlocale(LC_ALL, "");

	int A, B;
	printf("Insira A: ");
	scanf("%d", &A);
	printf("Insira B: ");
	scanf("%d", &B);
	
	printf("######\n");

	retmaior(&A,&B);

	printf("A: %d\n", A);
	printf("B: %d\n", B);



	return 0;
}