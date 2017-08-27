#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//12

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
