#include <stdio.h>
#include <stdlib.h>

/*
1. Crie um programa que:
	(a) Aloque dinamicamente um array de 5 números inteiros,
	(b) Peça para o usuário digitar os 5 números no espaço alocado,
	(c) Mostre na tela os 5 números,
	(d) Libere a memória alocada.
*/

int main(){

	int *nums;
	nums = (int *) malloc(5 * sizeof(int));

	int i=0;
	for(i=0; i<5; i++){
		printf("Insira um inteiro no nums[%d]: ", i);
		scanf("%d", &nums[i]);
	}
	for(i=0; i<5;i++){
		printf("nums[%d]: %d\n", i, nums[i]);
	}
	
	free(nums);

	return 0;
}