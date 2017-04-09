#include <stdio.h>
#include <stdlib.h>

/*
  3. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
     dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos 
     números são pares e quantos são ímpares.
*/

int main(){

	int tamanho;
	printf("Insira o tamanho do vetor: ");
	scanf("%d", &tamanho);

	int *nums = (int*) malloc(tamanho * sizeof(int));

	int i=0, count_impares=0, count_pares=0;
	for(i=0; i<tamanho; i++){
		printf("nums[%d]: ", i);
		scanf("%d", &nums[i]);
		if(nums[i] % 2 == 0){
			count_pares++;
		}else{
			count_impares++;
		}
	}

	printf("Pares: %d\n", count_pares);
	printf("Impares: %d\n", count_impares);

	free(nums);

	return 0;
}