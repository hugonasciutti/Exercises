#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
  endereço de cada posição desse array.
*/


int main(){
	setlocale(LC_ALL, "");

	float x[10];
	int i=0;

	for(i=0; i<10; i++){
		printf("&x[%d]: %p\n", i, &x[i]);
	}
	

	return 0;
}