#include <stdio.h>
#include <locale.h>
#include <math.h>


/*
	35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
	    hipotenusa = raiz_quadrada(a² + b²). Faça um programa que receba os valores de a e b e calcule
	    o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
*/

int main(){
	setlocale(LC_ALL, "");

	float a=0, b=0;
	float hipotenusa = 0;
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
	scanf("%f", &b);

	hipotenusa = sqrt(a*a + b*b);

	printf("Hipotenusa = %.2f\n", hipotenusa);


	return 0;
}
