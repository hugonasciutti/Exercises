#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//1
/*
int main(){
    setlocale(LC_ALL,"");
    char string[100];
    gets(string);
    printf("Gets: %s",string);



    return 0;
}
*/

//2.
/*
int main(){

    setlocale(LC_ALL, "");
    char string[30];
    gets(string);
    int i, length;
    for(i=0; string[i] != '\0'; i++){
        length = i+1;
    }
    printf("Tamanho: %d",length);

    return 0;
}
*/

//3
//int main()



//4
/*
int main(){
    char nome[10];
    gets(nome);
    int i;
    for(i=0; nome[i] != '\0'; i++){
        printf("%c",nome[i]);
    }
    return 0;
}
*/


//5
/*
int main(){
    setlocale(LC_ALL, "");
    char nome[30];
    gets(nome);
    int i,j=0;
    for(i=0; nome[i] != '\0'; i++){
        if(nome[i] != ' '){
            printf("%c",nome[i]);
            j++;

        }
    }
    printf("%d",j);


    return 0;
}
*/


//6
/*
int main(){
    setlocale(LC_ALL, "");

    char nome[30], sexo;
    int idade;

    printf("Insira nome: ");
    gets(nome);
    printf("Insira sexo 'F' para Feminino e 'M' para Masculino: ");
    scanf("%c",&sexo);
    printf("Insira idade: ");
    scanf("%d",&idade);

    if((sexo == 'F' || sexo == 'f') && (idade < 25)){
        printf("ACEITA");
    }

    return 0;
}
*/

//7
/*
int main(){
    setlocale(LC_ALL, "");

    int i,j=0;
    char nums[6] = "01011";
    for(i=0; i < strlen(nums); i++){
        if(nums[i] == '1'){
            j++;
        }
    }
    printf("Soma: %d\n", j);




    return 0;
}
*/

//8
/*
int main(){

    int i;
    char str[]="001a00b";
    for(i=0;i<strlen(str);i++)
        if(str[i]=='0')
            str[i]='1';
    printf("%s\n", str);


    return 0;
}
*/

//9
/*
int main(){
    char nome[10];

    fgets(nome,sizeof(nome),stdin);

    int i;
    if(nome[0] == 'a' || nome[0] == 'A'){
        for(i=0; i<strlen(nome); i++)
            printf("%c", nome[i]);
    }else{
        printf("Nao comeca com a ou A\n");
    }

    return 0;
}
*/

//10
/*
int main(){

    char word[50];

    int i;
    fgets(word, sizeof(word), stdin);
    printf("sizeof(word):%d\n", (int)sizeof(word));
    for(i = strlen(word);i>=0;i--){
        if(word[i] == '\n')
            word[i]='\0';
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}
*/

//11
/*
int main(){

    char vogais[6]="aeiou";
    char str[50];
    int i,j;
    fgets(str,sizeof(str),stdin);
   
    for(i=0; i<strlen(str); i++){
        for(j=0; j<strlen(vogais); j++){
            if(str[i]==vogais[j]){           
                str[i]=' ';                              
            }
        }
    }

    for(i=0;i<strlen(str);i++){
        printf("%c", str[i]);
    }

    return 0;
}
*/

//12
/*
int main(){

    char vogais[6]="aeiou";
    char str[50];
    int i,j;
    fgets(str,sizeof(str),stdin);
    char subs;
    scanf("%c",&subs);
   
    for(i=0; i<strlen(str); i++){
        for(j=0; j<strlen(vogais); j++){
            if(str[i]==vogais[j]){           
                str[i]= subs;                              
            }
        }
    }

    for(i=0;i<strlen(str);i++){
        printf("%c", str[i]);
    }

    return 0;
}
*/

//13
/*
int main(){

    char str[50];
    int i,count=0;
    fgets(str,sizeof(str),stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Branco: %d\n", count);

    return 0;
}
*/

//14
/*
int main(){

    int i;
    char str[50];
    fgets(str,sizeof(str),stdin);
    for(i=0; i<strlen(str);i++)
        str[i] += 1;   
    printf("%s\n", str);

    return 0;
}
*/


//15
/*
int main(){

    int i;
    char str[50];
    fgets(str, sizeof(str), stdin);

    for(i=0;i<strlen(str); i++){
        if(str[i]>=65 && str[i] <=90){
            str[i] += 32;
        }
        // else if(str[i]>=97 && str[i]<=122){
        //     str[i] -= 32;
        // }
    }
    printf("%s\n", str);


    return 0;
}
*/

//16
/*
int main(){

    int i;
    char str[50];
    fgets(str, sizeof(str), stdin);

    for(i=0;i<strlen(str); i++){
        if(str[i]>=97 && str[i]<=122){
            str[i] -= 32;
        }
        // else if(str[i]>=65 && str[i] <=90){
        //     str[i] += 32;
        // }
    }
    printf("%s\n", str);


    return 0;
}
*/

//17
/*
int main(){

    char str[50];
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    int strl = (int)strlen(str);
    for(i=0;i<strl;i++){
        if(str[i]==' '){
            str[i]='\0';
            count++;
        }
    }
    for(i=0;i<strl-count; i++){      
        printf("%c", str[i]);            
    }
    printf("\n");


    return 0;
}
*/

//18

/*
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
*/


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



