#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


//1
/*
struct horas{
    int hora, minuto, segundo;
};

struct data{
    int d,m,a;
};

struct compromisso{
    struct horas ho;
    struct data da;
    char texto[100];
};

int main(){

    struct horas h1;
    h1.hora = 20;
    h1.minuto = 10;
    h1.segundo = 05;

    printf("%d:%d:%d\n",h1.hora, h1.minuto, h1.segundo);

    struct data hoje;
    hoje.d = 19;
    hoje.m = 10;
    hoje.a = 2016;

    printf("%d/%d/%d\n", hoje.d, hoje.m, hoje.a);

    struct compromisso co;

    co.ho = h1;

    co.da = hoje;

    strcpy(co.texto,"fazendo um teste");
    gets(co.texto);

    printf("%d/%d/%d | %d:%d:%d \nTexto: %s", co.ho.hora, co.ho.minuto, co.ho.segundo, co.da.d, co.da.m, co.da.a, co.texto);




    return 0;
}
*/
//


//2
/*
struct pessoa{
        char nome[30];
        int idade;
        char end[50];
    };

int main(){

    struct pessoa p1;

    printf("Nome: ");
    setbuf(stdin,NULL);
    gets(p1.nome);
    printf("Idade: ");
    scanf("%d",&p1.idade);
    printf("Endereco: ");
    setbuf(stdin,NULL);
    gets(p1.end);
    printf("Nome: %s\nIdade: %d\nEndereco: %s",p1.nome,p1.idade,p1.end);


    return 0;
}
*/
//









//3
/*
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
*/
//

//
//4

/*
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
*/

//Lista 06
//Questão 10
struct dados{
    char nome[50];
    char endereco[100];
    int tel;   
};

int main(){

    struct dados p[5];
    struct dados struct_tmp;

    int i, j;
    char tmp[50];


    for(i=0; i<5; i++){
        printf("///////Cadastro [%d]////////\n", i);
        printf("p[%d].nome: ", i);     
        setbuf(stdin, NULL);
        fgets(p[i].nome, sizeof(p[i].nome), stdin);

        printf("p[%d].endereco: ", i);
        setbuf(stdin, NULL);
        fgets(p[i].endereco, sizeof(p[i].endereco), stdin);

        printf("p[%d].tel: ", i);
        scanf("%d",&p[i].tel);
        printf("///////-------------///////\n");
    }
    

    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(stricmp(p[i].nome, p[j].nome)>0){
               struct_tmp = p[i];
               p[i] = p[j];
               p[j] = struct_tmp;
            }
        }

    }
    
    printf("/////////Resultados Ordenados//////////\n");

    for(i=0; i<5; i++){
        printf("#############\n");
        printf("p[%d].nome: \t%s", i, p[i].nome);
        printf("p[%d].endereco: \t%s", i, p[i].endereco);
        printf("p[%d].tel:\t%d", i, p[i].tel);
        printf("\n#############\n");

    }
    
    return 0;
    
}





