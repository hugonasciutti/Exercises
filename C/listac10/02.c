#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 2. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
    dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.
*/

int main(){

	int tamanho=0;
	printf("Insira o tamanho do array: ");
	scanf("%d", &tamanho);

	int *nums;
	nums = (int*) malloc(tamanho * sizeof(int));

	int i=0;
	for(i=0; i<tamanho; i++){
		printf("nums[%d]: ",i);
		scanf("%d", &nums[i]);
	}
	printf("###Imprimindo\n");

	for(i=0; i<tamanho;i++){
		printf("nums[%d]: %d\n", i, nums[i]);
	}

	free(nums);


	return 0;
}