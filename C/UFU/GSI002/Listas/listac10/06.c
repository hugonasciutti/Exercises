#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  6. Faça um programa que simule a memória de um computador: o usuário irá especificar o 
  	 tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto,
  	 a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida,
  	 o usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o 
  	 valor contido em uma determinada posição. A memória deve iniciar com todos os dados
  	 zerados.
*/

int main(){

	int tamanho_alocar=0;

	printf("Insira o tamanho em bytes que deseja alocar na memória.\n");
	printf("Bytes: ");

	scanf("%d", &tamanho_alocar);

	while(tamanho_alocar % 4 != 0 || tamanho_alocar == 0){
		setbuf(stdin, NULL);
		printf("Tamanho inválido, insira um valor múltiplo de 4.\n");
		printf("Alocar: ");
		scanf("%d", &tamanho_alocar);		
	}

	int *nums = (int*) calloc(tamanho_alocar/4, sizeof(int));

	if(nums == NULL){
		printf("Erro: Sem memória.\n");
		exit(1);
	}else{
		printf("%d bytes alocados com sucesso!\n",  tamanho_alocar);
	}

	if(tamanho_alocar/4 == 1){
		printf("%d posição diponível no array.\n", tamanho_alocar/4);
	}else{
		printf("%d posições diponíveis no array.\n", tamanho_alocar/4);

	}

	int opcao=0, posicao=0;
	while(1){

		setbuf(stdin, NULL);
		printf("######### Menu #########:\n");
		printf("1. Preencher uma posição do array.\n");
		printf("2. Consultar um dos valores.\n");
		printf("Digite -999 para encerrar a execução do programa.\n");
		printf("Opção: ");
		scanf("%d", &opcao);
		printf("########################\n");
		if(opcao > 2 || opcao < 1){
			if(opcao == -999)
				break;
			printf("Opção inválida!\n");
			continue;
		}


		if(opcao == 1){
			setbuf(stdin, NULL);
			printf("Qual posição alterar: ");
			scanf("%d", &posicao);
			printf("Digite o valor que a posição %d terá: ", posicao);
			scanf("%d", &nums[posicao]);
			printf("Valor %d atribuído à posição %d com sucesso!\n", nums[posicao], posicao);
		}

		if(opcao == 2){
			printf("Qual posição consultar: ");
			scanf("%d", &posicao);
			printf("nums[%d]: %d\n", posicao, nums[posicao]);			
		}
		if (opcao == -999)
		{
			break;
		}
	}
	
	free(nums);
	
	return 0;
}
