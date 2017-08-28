#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//18

int main(){

    //ERRO NA LEITURA DE MEMÓRIA
    //

    int i;
    char string[10];
    char l1, ol2;
    // string[5]='a';
    char ol1[1], ol1_save;

    printf("String: ");
    setbuf(stdin, NULL);
    fgets(string, (int)sizeof(string), stdin);
    printf("sizeof(string): %d\n", (int)sizeof(string));
    printf("strlen(string): %d\n", (int)strlen(string));

    // for(i=0; i<10; i++){
    //     if(string[i]==10)
    //         string[i]= '\0';
    // }


    printf("Qual L1: ");
    // setbuf(stdin, NULL);
    // ol1[0] = getchar();
    scanf("%s", &ol1[0]);
    ol1_save = ol1[0];
    printf("%c\n", ol1_save);
    printf("Por L1: ");
    // setbuf(stdin, NULL);
    scanf("%s", &l1);
    // l1 = getchar();

    printf("Qual L2: ");
    // setbuf(stdin, NULL);
    scanf("%s", &ol2);

    char l2;
    printf("Por L2: ");
    // setbuf(stdin, NULL);
    scanf("%s", &l2);

    int string_size = (int)strlen(string);
        printf("%c\n", ol1_save);


    for(i=0; i<=string_size; i++){
        if(string[i] == ol1_save){
            string[i] = l1;
        }else if(string[i] == ol2){
            string[i] = l2;
        }
    }

    for(i=0; i<strlen(string); i++){
        printf("%c", string[i]);
    }

    printf("\n");




    return 0;
}
