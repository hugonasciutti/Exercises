#include <stdio.h>
#include <locale.h>

/*
	48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

int main(){
	setlocale(LC_ALL, "");

	int horas = 0;
	int minutos = 0;
	int segundos = 0;
	printf("Insira os segundos: ");
	scanf("%d", &segundos);	

	horas = segundos / 3600;
	segundos -= horas * 3600; 

	minutos = segundos / 60;
	segundos -= minutos * 60;

	

	printf("==============\n");
	printf("Horas: %d\n", horas);
	printf("Minutos: %d\n", minutos);
	printf("Segundos: %d\n", segundos );
	printf("==============\n");
	printf("   %d:%d:%d   \n", horas, minutos, segundos );
	printf("==============\n");

	return 0;
}
