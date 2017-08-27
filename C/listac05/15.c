#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//15

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
