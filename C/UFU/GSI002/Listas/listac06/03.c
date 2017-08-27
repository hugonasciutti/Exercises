#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//3

struct aluno{
    char nome[30];
    int matri;
    char curso[50];

};

int main(){

    struct aluno alunos[5];

    int i;
    for(i=0; i<5; i++){

        printf("Aluno[%d] Nome: ", i);
        setbuf(stdin,NULL);
        gets(alunos[i].nome);
        printf("Aluno[%d] Matricula: ",i);
        scanf("%d",&alunos[i].matri);
        printf("Aluno[%d] Curso: ",i);
        setbuf(stdin,NULL);
        gets(alunos[i].curso);
        printf("\n");

    }
    for(i=0;i<5;i++){
        printf("Aluno[%d] Nome: %s - Aluno[%d] Matricula: %d - Aluno[%d] Curso: %s\n\n", i, alunos[i].nome,i,alunos[i].matri,i,alunos[i].curso);

    }

    return 0;
}
