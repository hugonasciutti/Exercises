#include <stdio.h>
#include <stdlib.h>

/*
22. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
    com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
	!
	!!
	!!!
	!!!!
	!!!!!
*/

int exclamacoes(int n);

int main(){
	

	int N;
	printf("Insira N: ");
	scanf("%d", &N);

	exclamacoes(N);


	return 0;
}


int exclamacoes(int n){

	int i,j;

	for(i=0; i<n; i++){ // Número de linhas
		for(j=0; j<=i; j++){ //Número de repetições para imprimir !
			printf("!");
		}
		printf("\n");

	}

	return 0;
}