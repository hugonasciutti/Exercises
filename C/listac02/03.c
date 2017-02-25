#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário,
	   imprima o numero ao quadrado.
*/

int main(){
	setlocale(LC_ALL, "");

	float num=0;
	float calc=0;

	printf("Insira um número: ");
	scanf("%f", &num);

	if(num>0){
		calc = sqrt(num);
		printf("Raiz quadrada de %.2f é %.2f.\n", num, calc);
	} else {
		calc = num * num;
		printf("%.2f ao quadrado é %.2f.\n", num, calc);
	}


	return 0;
}
