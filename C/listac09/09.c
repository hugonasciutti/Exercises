#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
  Imprima o endereço de cada posição dessa matriz.
*/


int main(){
	setlocale(LC_ALL, "");

	float x[3][3];
	int i=0,j=0;

	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			printf("&x[%d][%d]: %p\n", i, j, &x[i][j]);
		}
	}
	

	return 0;
}