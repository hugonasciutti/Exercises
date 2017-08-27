#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//4

struct cadastro_aluno
{
    char nome[50];
    int matricula;
    int prova1, prova2, prova3;
};

int main(){

    struct cadastro_aluno alunos[5];
    int i;
    int maior_notap1 =0, nota_posicao =0, menor_media_posicao=0, maior_media_posicao=0;
    float media=0, maior_media = 0, menor_media = 0;

    for(i=0; i<5;i++){

        printf("Alunos[%d] Nome: ", i);
        setbuf(stdin,NULL);

        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Alunos[%d] Matricula: ", i);

        scanf("%d", &alunos[i].matricula);
        printf("Alunos[%d] Prova 1: ", i);
        scanf("%d", &alunos[i].prova1);
        printf("Alunos[%d] Prova 2: ", i);
        scanf("%d", &alunos[i].prova2);

        printf("Alunos[%d] Prova 3: ", i);
        scanf("%d", &alunos[i].prova3);

        if(maior_notap1 < alunos[i].prova1){
            nota_posicao = i;
            maior_notap1 = alunos[i].prova1;
        }
        media = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3.0;
        if(maior_media < media){
            maior_media_posicao = i;
            maior_media = media;
        }
        if(menor_media > media){
            menor_media_posicao = i;
            menor_media = media;
        }
        if(media >= 6)
            printf("####Aprovado####\n");
        else
            printf("####Reprovado####\n");
    }

    for(i=0;i<5;i++){
        printf("#########\n");
        printf("Alunos[%d] Nome: %s",i, alunos[i].nome);
        printf("Alunos[%d] Matricula: %d\n",i, alunos[i].matricula);
        printf("Alunos[%d] Prova 1: %d\n",i, alunos[i].prova1);
        printf("Alunos[%d] Prova 2: %d\n",i, alunos[i].prova2);
        printf("Alunos[%d] Prova 3: %d\n",i, alunos[i].prova3);
        printf("#########\n");
    }

    printf("Maior nota Prova 1, Alunos[%d]: %d\n", nota_posicao, alunos[nota_posicao].prova1);
    printf("Maior média geral, Alunos[%d]: %.2f\n", maior_media_posicao, maior_media);
    printf("Menor média geral, Alunos[%d]: %.2f\n", menor_media_posicao, menor_media);

    return 0;
}
