#include <stdio.h>
#include <locale.h>

/*
	46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
	    Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
*/

int main(){
	setlocale(LC_ALL, "");

	int numTresDigitos = 0;
	int unidade=0, dezena=0, centena=0;

	scanf("%d", &numTresDigitos);

	unidade = numTresDigitos / 100;
	dezena = ((numTresDigitos % 100) / 10);
	centena = numTresDigitos % 10;


	printf("Número Invertido: %d%d%d\n", centena, dezena, unidade);


	return 0;
}
