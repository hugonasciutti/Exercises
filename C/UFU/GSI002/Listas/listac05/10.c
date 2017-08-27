#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//10

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
