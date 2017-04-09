#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  7. Crie um programa que contenha uma função que permita passar por parâmetro dois
  números inteiros A e B. A função deverá calcular a soma entre estes dois números e
  armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
  modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.
*/

void soma_ab(int *A, int *B){
	*A = *A+*B;
}

int main(){
	setlocale(LC_ALL, "");

	int A, B;

	printf("Insira A: ");
	scanf("%d", &A);
	printf("Insira B: ");
	scanf("%d", &B);

	soma_ab(&A, &B);

	printf("A: %d\n", A);
	printf("B: %d\n", B);

	return 0;
}