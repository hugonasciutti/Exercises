#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
  apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
  valor lido.
*/


int main(){
	setlocale(LC_ALL, "");

	int x[5];

	int *y;
	int i;

	for(i=0;i<5;i++){
		printf("x[%d]: ", i);
		y = &x[i];
		scanf("%d", y);
		*y *= 2;
	}
	printf("##########\n");
	for(i=0; i<5; i++){
		printf("x[%d]: %d\n", i, x[i]);
	}

	return 0;
}