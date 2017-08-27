#include <stdio.h>
#include <locale.h>

/*
	52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
	    porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
	    que leia quanto cada apostador investiu, o valor do prêmio, e impra quanto cada um 
	    ganharia do prêmio com base no valor investido.
*/

int main(){
	setlocale(LC_ALL, "");

	float valorPremio=0;
	float apostador1=0, apostador2=0, apostador3=0;
	float valorApostadoTotal=0;

	float premioProporcionalApostador1=0;
	float premioProporcionalApostador2=0;
	float premioProporcionalApostador3=0;


	printf("Insira o valor do prêmio: ");
	scanf("%f", &valorPremio);

	printf("Insira valor do apostador 1: ");
	scanf("%f", &apostador1);

	printf("Insira valor do apostador 2: ");
    scanf("%f", &apostador2);

	printf("Insira valor do apostador 3: ");
    scanf("%f", &apostador3);

    valorApostadoTotal = apostador1 + apostador2 + apostador3;

    premioProporcionalApostador1 = (apostador1 / valorApostadoTotal)*100;
    premioProporcionalApostador2 = (apostador2 / valorApostadoTotal)*100;
    premioProporcionalApostador3 = (apostador3 / valorApostadoTotal)*100;

    printf("Apostador 1 recebe: %f\n", premioProporcionalApostador1);
    printf("Apostador 2 recebe: %f\n", premioProporcionalApostador2);
    printf("Apostador 3 recebe: %f\n", premioProporcionalApostador3);


	return 0;
}
