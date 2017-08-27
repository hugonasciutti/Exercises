#include <stdio.h>
#include <stdlib.h>

/*
23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exem-
    plo, a saída para n = 4 seria:
	*
	**
	***
	****
	***
	**
	*    
*/

void triangulo_latera(int n);

int main(){

	int N;
	printf("Insira N: ");
	scanf("%d", &N);

	triangulo_latera(N);


	return 0;
}


void triangulo_latera(int n){

		   // N = Quantidade máxima de *
	int i; // Andar linhas
	int j; // Imprimir *
	int k; // Andar linhas reverso, para não alterar valor de i.

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}

		printf("\n");

		if(i==n-1){
			for(k=n-1; k>0; k--){
				for(j=0; j<k; j++){
					printf("*");
				}
				printf("\n");
			}
		}
	}


}