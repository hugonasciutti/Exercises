#include <stdio.h>

int main(){

//N, número de cartas
//Imprimir a quantidades de cartas com o valor X de retorno.
//X o valor das cartas

	int i=0,j=0,N=0;
	scanf("%d",&N); //Número de cartas a serem distribuidas
	int X[N]; // Valor das cartas
	for(i=0; i<N; i++){
		scanf("%d",&X[i]);
		printf("%d ",X[i]);
	}
	int carta, qtd=0;
	scanf("%d", &carta);//Escolhe a carta a ser analisada;
	for(j=0; j<N; j++){
		if(X[j]==carta){
			qtd++;
		}
	}
	printf("%d\n", qtd);




	return 0;
}