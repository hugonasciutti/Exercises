#include <stdio.h>
#include <stdlib.h>

/*
  25. Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado
      da seguinte série:
      S= 2/4+5/5.10/6+...+(N²+1)/(N+3)
*/


int serie(int N){
	int i=0;
	int S=0;
	for(i=1; i<=N; i++){
		S+=(i*i+1)/(i+3);
	}
	return S;
}

int main(){
	int n;
	printf("Insira N: ");
	scanf("%d", &n);
	printf("S = %d\n", serie(n));



	return 0;
}