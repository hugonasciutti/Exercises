#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  10. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
  do teclado e imprima o endereço das posições contendo valores pares.
*/


int main(){
	setlocale(LC_ALL, "");

	
	int x[5];
	int i;

	for(i=0; i<5; i++){
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("############\n");
	for(i=0; i<5; i++){
		if(x[i] % 2 == 0){
			printf("x[%d]: %d - Par | Endereço: %p\n", i, x[i], &x[i]);
		}
	}




	return 0;
}