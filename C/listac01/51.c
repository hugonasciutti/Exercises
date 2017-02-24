#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	51. Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua
		distância da origem (0,0).
*/

int main(){
	setlocale(LC_ALL, "");

	float x = 0; 
	float y = 0; 
	float R = 0; 
	
	printf ("Digite a coordenada x: "); 
	scanf ("%f", &x); 
	printf ("Digite a coordenada y: "); 
	scanf ("%f", &y); 
	
	R=sqrt(pow(x,2)+pow(y,2));
	
	printf("A distância é: %f \n", R); 
	
	return 0; 
}
