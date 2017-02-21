#include <stdio.h>
#include <locale.h>

/*
	49. Faça um programa que leia o horário (hora, minuto e segundo) de inicio e duração, em
	    segundos, de uma experiência biológica. O programa deve resultar com o novo horário 
	    (hora, minuto e segundo) do término da mesma.
*/

int main(){
	setlocale(LC_ALL, "");

	// Horário de início

	int horasInicio=0, minutosInicio=0, segundosInicio=0;
	int horasTermino=0, minutosTermino=0, segundosTermino=0;
	int segundosDuracao=0;


	printf("Insira o horário de início da experiência biológica em segundos: ");
	scanf("%d", &segundosInicio);


	printf("Insira a duração do experimento em segundos: ");
	scanf("%d", &segundosDuracao);

	// Término == Segundos horário de início + Segundos do tempo de duração;
	segundosTermino += segundosInicio + segundosDuracao;

	//Início
	horasInicio = segundosInicio / 3600;
	segundosInicio -= horasInicio * 3600;

	minutosInicio = segundosInicio / 60;
	segundosInicio -= minutosInicio * 60;


	//Término
	horasTermino = segundosTermino / 3600;
	segundosTermino -= horasTermino * 3600;

	minutosTermino = segundosTermino / 60;
	segundosTermino -= minutosTermino * 60;


	printf("Inicio: %d:%d:%d\n", horasInicio, minutosInicio, segundosInicio);
	printf("=================\n");
	printf("Término: %d:%d:%d\n", horasTermino, minutosTermino, segundosTermino);





	return 0;
}
