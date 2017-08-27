#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//19

int main(){

    int idade=0, old=0, oldest=0, young=0, youngest=0, idade_anterior=0;
    char nome[50], oldest_name[50], youngest_name[50];


    int i =0,j;

    while(idade >= 0){

        i++;
        // if(idade<idade_anterior && i % 2 == 0){
        //     youngest = idade;
            for(j=0; j<strlen(nome)-1;j++){
                youngest_name[j] = nome[j];
            }
        // }



        if(oldest>idade){
            oldest = idade;
            strcpy(oldest_name, nome);
        }

        fgets(nome, 50, stdin);
        scanf("%d", &idade);

    }

    printf("Oldest Name: %s\n", oldest_name);
    printf("Oldest Age: %d\n", oldest);
    printf("Youngest Name: %s\n", youngest_name);
    printf("Youngest Age: %d\n", youngest);


    return 0;
}
