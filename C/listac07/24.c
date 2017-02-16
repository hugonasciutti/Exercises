#include <stdio.h>
#include <stdlib.h>

/*
24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exem-
	plo, a saída para n = 6 seria:
     *		
    ***		
   *****		
  *******	
 *********
***********

*/

int imprimir(int n){

	int i=0,j=0,count=0;
	for(i=1; i<=n; i++){
		count=0;
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		for(j=0;j<i*2-1;j++){
			printf("*");
		}
			printf("\n");
	}

	return 0;
}


int main(){

	imprimir(6);



	return 0;
}