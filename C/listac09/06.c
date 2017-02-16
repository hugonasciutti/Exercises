#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
  que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
  de A na própria variável A e o dobro de B na própria variável B.

*/

void dobro(int *A, int *B){
	*A *= 2;
	*B *= 2;
}

int main(){
	setlocale(LC_ALL, "");

	int A, B;

	printf("Insira A: ");
	scanf("%d", &A);
	printf("Insira B: ");
	scanf("%d", &B);

	dobro(&A, &B);

	printf("A: %d\n", A);
	printf("B: %d\n", B);

	return 0;
}