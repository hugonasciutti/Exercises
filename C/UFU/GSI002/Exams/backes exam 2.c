#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
3. Crie e aloque dinamicamente uma estrutura de alunos que contenha nome, 
   matricula e nota, leia N que será a quantidade de alunos, preencha os dados
   da estrutura e imprima 'aprovado' para os alunos com a nota maior ou igual a 5.
*/

struct alunos{
	float nota;
	char nome[50];
	int matricula;
};


int main(){
	setlocale(LC_ALL, "");

	int N; // Número de alunos.
	printf("Insira a quantidade de alunos: ");
	scanf("%d", &N);

	struct alunos* myalunos;
	
	myalunos = (struct alunos*) malloc(N * sizeof(struct alunos));

	int i=0;
	int length=0;

	for(i=0; i<N; i++){
		setbuf(stdin, NULL);
		printf("Aluno[%d] Nome: ", i);
		fgets(myalunos[i].nome, 50, stdin);

		length = strlen(myalunos[i].nome);
		myalunos[i].nome[length-1] = '\0'; //Remove o \n que a função fgets coloca na última posição.
		
		printf("Aluno[%d] Matrícula: ",i);
		scanf("%d", &myalunos[i].matricula);
		printf("Aluno[%d] Nota: ", i);
		scanf("%f", &myalunos[i].nota);
		printf("###############\n");

	}

	for(i=0; i<N; i++){
		if(myalunos[i].nota >= 5){
			printf("Aluno[%d] Nome: %s\n",i, myalunos[i].nome);
			printf("Aluno[%d] Matrícula: %d\n",i, myalunos[i].matricula);
			printf("Aluno[%d] Nota: %.2f\n",i, myalunos[i].nota);
			printf("Aprovado.\n");
			printf("###############\n");

		}else{
			printf("Nome: %s\n", myalunos[i].nome);
			printf("Matrícula: %d\n", myalunos[i].matricula);
			printf("Nota: %.2f\n", myalunos[i].nota);
			printf("Reprovado.\n");
			printf("###############\n");
		}
	}



}