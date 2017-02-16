#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
 12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma
de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8(2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem "Número inválido".
*/

int soma_casas(int x);

int main(){

	setlocale(LC_ALL,"");	
	int x;
	printf("Insira um número maior do que 0(zero): ");
	scanf("%d", &x);
	printf("Soma das posições: %d\n", soma_casas(x));

	return 0;
}

int soma_casas(int x){
	
	if(!x>0){
		printf("Número inválido.\n");
		return 1;
	}

	int i, casas = 0, sum = 0, x2 = x, x3 = x, vlr_casas1 = 0, vlr_casas2 = 0;

		while(x2>=10){ //2 casas == 100;
			x2 /= 10;
			casas++;
			
		}

		while(casas>1){

			vlr_casas1 = x / pow(10,casas); // If 561, return 5, used for helping the math;
			vlr_casas2 = vlr_casas1 * pow(10,casas); // 5 * 100 = 500;

			x3 -= vlr_casas2; 
			sum += vlr_casas1;

			casas--;			
		}

		if(x3 >= 10){			
			sum += x3/10;
			x3 -= 10 * (x3/10);
		}
		if(x3 < 10){
			sum += x3;
			x3 -= x3;
		}

	return sum;
}