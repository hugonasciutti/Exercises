#include <stdio.h>
#include <stdlib.h>

//Prova do Backes
//Questão 1

//Write a program that prints the exclamations marks as the following example according the number inserted in N.
// N=3
//!
//!!
//!!!
//!!
//!

int main(){

	int N,i,j,k;

	printf("N: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){ //Verifica se já imprimiu até a última linha


		for(j=0;j<i;j++){ //Quantidade de exclamações a serem impressas
			printf("!");			
		}

		printf("\n");

		if(i==N){ //Se chegar na última linha, fazer o caminho reverso.
			
			for(k=N-1; k>0; k--){ //N-1 para não repetir a quantidade de exclamações da última linha que foi impressa.

				for(j=0;j<k;j++){ //Quantidade de exclamações a serem impressas
					printf("!");
				}

				printf("\n");

			}

		}

	}


	return 0;
}