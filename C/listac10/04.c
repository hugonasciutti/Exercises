#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
 4. Faça um programa que receba do usuário o tamanho de uma string e chama uma
    função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o 
    conteúdo dessa string. O programa imprime a string sem suas vogais.
*/

int main(){
	setlocale(LC_ALL,"");

	int size_char = 0;	
	printf("Insira o tamanho da string: ");
	scanf("%d", &size_char);

	char *string;
	string = (char*) malloc(size_char * sizeof(char));

	printf("Insira o conteúdo da String: ");
	setbuf(stdin, NULL);
	fgets(string, (size_char+2), stdin); //+2 Devido à função fgets que adiciona \n ao final do array.

	int i=0, j=0, flag=0;
	char vogais[5];
	vogais[0] = 'a';
	vogais[1] = 'e';
	vogais[2] = 'i';
	vogais[3] = 'o';
	vogais[4] = 'u';
	
	printf("String sem vogais: ");

	for(i=0; i<strlen(string); i++){
		flag = 0;
		if(string[i] == '\n')
			break;
		for(j=0;j<5;j++){
			if(string[i] == vogais[j]){
				flag = 1;
			}
		}
		if(flag == 0){
			printf("%c", string[i]);				
		}
	}
	printf("\n");
	free(string);
	return 0;
}