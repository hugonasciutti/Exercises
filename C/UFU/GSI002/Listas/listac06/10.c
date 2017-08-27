//Lista 06
//Questão 10
#include <stdio.h>
#include <string.h>


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
            if(strcasecmp(p[i].nome, p[j].nome)>0){ //stricmp wasn't in the library, so i used strcasecmp for insensitive case letters.
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
