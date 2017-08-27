#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//7

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
