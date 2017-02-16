#include <stdio.h>
#include <locale.h>

/*
	47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

int main(){
	setlocale(LC_ALL, "");

	int num =0;
	int milhar=0, centena=0, dezena=0, unidade=0;
	
	while(num < 1000 || num > 9999){
		printf("Insira um número de 1000 a 9999: ");
		scanf("%d", &num);
	}

	milhar = num / 1000;
	centena = (num / 100) % 10;
	dezena = (num / 10) % 10 ;
	unidade = num % 10;

	printf("M: %d\n", milhar);
	printf("C: %d\n", centena);
	printf("D: %d\n", dezena);
	printf("U: %d\n", unidade);

	return 0;
}
