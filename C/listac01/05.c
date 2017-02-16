#include <stdio.h>

/* 5. Leia um número real e imprima a quinta parte deste número. */

int main(){

	float real;

	printf("Insira um numero real: ");
	scanf("%f", &real);

	real = real/5; //1/5 == 20% == 0.2

	printf("A quinta parte deste numero eh: %f\n", real);

	return 0;
}