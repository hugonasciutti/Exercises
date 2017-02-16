#include <stdio.h>

/*
14. Faça um função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma 
mensagem de acordo com a tabela abaixo:

+-----------+------------------------------+
|  CONSUMO	|  (Km/l)   | 	 MENSAGEM 	   |
| menor que |	  8		| Venda o carro!   |
| entre		| 	8 e 14	|	Econômico!	   | // 8 e 14?
| maior que	|	 12 	| Super econômico! |
+------------------------------------------+


*/

float decisao(float km, float liters_consumed);

int main(){

	float km=0;
	printf("Insira Km percorrido: ");
	scanf("%f", &km);

	float liters=0;
	printf("Insira Litros consumidos: ");
	scanf("%f", &liters);

	decisao(km,liters);
	



	return 0;
}

float decisao(float km, float liters_consumed){

	float consume_math = km / liters_consumed;	

	printf("Km/l: %f\n", consume_math);
	if(consume_math < 8){
		printf("Venda o carro!\n");
		return -1;
	}else if(consume_math > 8 && consume_math < 12){
		printf("Econômico!\n");
		return 0;
	}else if(consume_math >= 12){ // Aplico a regra desta maneira vide questão possivelmente errada.
		printf("Super econômico!\n");
		return 1;
	}
	return -2;
}