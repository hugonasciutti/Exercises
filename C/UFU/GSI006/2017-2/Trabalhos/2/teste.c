#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "set.h"

#define MAX 200

struct aluno
{
   char *mat;    // núm.matrícula
   char *nome;   // nome do aluno
};
typedef struct aluno Aluno;

Set * loadSet (Set *l, FILE *f);
void present (Set *l);
int cmpAlunosMat(const void * x, const void * y);
int cmpAlunosNome(const void * x, const void * y);

int
main (int argc, char *argv[])
{
   	Set *l;
   	FILE *f;
   	int i;
	int e;
	Aluno * a ;
	Aluno * aux;

	//teste setCreate
	l = setCreate ();

	// loading Alunos into l
	f = fopen ( "nomes.txt", "r");
  	l = loadSet (l, f);
	present(l);
	printf("---\n")	;

	//teste setDelete
	setDelete (2,l);
   	present(l);
	printf("---\n")	;

	//teste SetGetE
	a = (Aluno * ) malloc( sizeof(Aluno) );
	a->nome = (char *) malloc( sizeof(MAX) );
	strcpy ( a->nome , "sousa");
	e = setGetEP (a,l,cmpAlunosNome);
	printf("[%d] ", e);
	aux = (Aluno *)setGetE(l,e-1);
	if (aux) printf("%s %s\n",aux->mat,aux->nome);
	printf("---\n");

	//teste setDestroy
	setDestroy (l);

	fclose(f);
	free(a);

   	return 0;
}

Set *
loadSet (Set *l, FILE *f)
{
	int i;
	Aluno *alunos=NULL;
	if(f==NULL)
	{
		fprintf(stderr,"File not found.\n");
		return NULL;
	}
	for(i=1;;i++)
	{
		alunos=(Aluno *)malloc(sizeof(Aluno));
		alunos->mat=(char *)malloc(MAX);
		alunos->nome=(char *)malloc(MAX);

		if((fscanf(f,"%s ",alunos->mat))==EOF)//"%s " com espaço para alunos->nome não armazenar o espaço
			break;

		fgets(alunos->nome,MAX,f);
		alunos->nome[strlen(alunos->nome)-1]='\0';//retirar o \n

		if(setIn(alunos,l,cmpAlunosMat)==1)//verifica repetidos
			continue;
		if(setInsert(alunos,l)!=1)//insere no Set
			break;
	}

	free(alunos->mat);
	free(alunos->nome);
	free(alunos);

	return l;
}

void present (Set *l)
{
	int i;
	Aluno *aux=NULL;
	for(i=0;i<setCard(l);i++)
	{
		aux=(Aluno *)setGetE(l,i);
		printf("%s %s\n",aux->mat,aux->nome);
	}

}

int cmpAlunosMat(const void * x, const void * y)
{
	Aluno *a=(Aluno *)x;
	Aluno *b=(Aluno *)y;
	return strcmp(a->mat,b->mat);
}

int cmpAlunosNome(const void * x, const void * y)
{
	Aluno *a=(Aluno *)x;
	Aluno *b=(Aluno *)y;
	return strcmp(a->nome,b->nome);
}

