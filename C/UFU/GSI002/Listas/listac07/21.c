#include <stdio.h>
#include <stdlib.h>


/*
21. Escreva uma função para determinar a quantidade de números primos abaixo N.
*/

int descubra_primos(int n);

int main(){

	int N;

	printf("Insira N: ");
	scanf("%d", &N);

	descubra_primos(N);



	return 0;
}

int descubra_primos(int n){

	int i=0, j=0, count=0, qtd_primos=0, primos[n], k=0;
	for(i=n-1; i>0; i--){// Indo até 0 com o i para testar todos os números.
		count = 0;
		for(j=1; j<=i; j++){ // Verificando números primos
			if( i % j == 0){
				count++;
			}
		}
		if(count == 2){
			qtd_primos++;
			primos[k++] = i;
		}
	}
	printf("Quantidade de números primos abaixo de N é: %d.\n", qtd_primos);
	
	printf("Primos abaixo de N: ");
	for(i=0; i<qtd_primos; i++){
		if(i < k){
			printf("%d, ", primos[i]);
			k--;
		}else{
			printf("%d.\n", primos[i]);
		}
	}
	
	return qtd_primos;
}