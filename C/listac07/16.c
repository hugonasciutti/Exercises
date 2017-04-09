#include <stdio.h>

/* 
16. Faça uma função chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando 
vários símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais
de igual serão mostrados.
*/

int DesenhaLinha(int n);

int main(){

	int n;
	printf("Insira N: ");
	scanf("%d", &n);

	DesenhaLinha(n);



	return 0;
}

int DesenhaLinha(int n){
	int i=0;

	for(i=0; i<n; i++){
		printf("=");
	}
	printf("\n");
	return 0;
}