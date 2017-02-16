#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
5. Faça um programa que leia um número N e:
	1. Crie dinamicamente e leia um vetor de inteiro de N posições;
	2. Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
	   no vetor.
*/


int main(){

	setlocale(LC_ALL, "");
	int tamanho;
	printf("Insira o tamanho do vetor de inteiros: ");
	scanf("%d", &tamanho);

	printf("########\n");

	int X;
	printf("Insira o valor de X que será analisado os múltiplos: ");
	scanf("%d", &X);
	
	printf("########\n");

	int *nums = (int*) malloc(tamanho * sizeof(int));
	int *mult = (int*) malloc(tamanho * sizeof(int));

	printf("Insira valores nas posições do vetor: \n");
	int i=0, count=0;
	
	for(i=0; i<tamanho; i++){ //Preenchendo o vetor.

		printf("nums[%d]: ", i);
		scanf("%d", &nums[i]);

		if(X % nums[i] == 0){
			mult[count] = nums[i];
			count++;
		}
	}

	printf("########\n");
	
	printf("Múltiplos: ");
	for(i=0; i<count; i++){
		if(i < count-1){
			printf("%d, ", mult[i]);
		}else{
			printf("%d.\n", mult[i]);

		}
	}

	return 0;
}