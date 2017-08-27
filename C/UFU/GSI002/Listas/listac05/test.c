#include <stdio.h>
#include <string.h>

int main(){
    int i,*j,k;
    char string[10];
    char l1, *l2, ol1, ol2;

    j= &i;
    j-=1;

    l2 = &l1;

    for(k=0; k<10; k--){
        j--;
        printf("j(%p)\n", j);
    }
    // printf("l1(%p)\n", l1);
    printf("%p\n", j);



    printf("String: ");
    // setbuf(stdin, NULL);
    // fgets(string, sizeof(string), stdin);
    // printf("sizeof(string): %d\n", (int)sizeof(string));
    // printf("strlen(string): %d\n", (int)strlen(string));

    // printf("############################\n");
    // for(i=0; i<20; i++){        
    //     printf("string[%d]: %c|int(%d)|add(%p)\n", i, string[i],(int)string[i], (void *)&string[i]);
    // }
    // printf("############################\n");



    // printf("Qual L1: ");
    // setbuf(stdin, NULL);
    // scanf("%s", &ol1);

    // int *j = &l1;
    // int k= &l1;
    // printf("j(%p)|&j(%p)\n", j, &j);
    // printf("&j-&k: %d\n", (int)(j-k));
    // printf("&ol1-&string[0]: %d\n", (int)(&ol1-&string[0]));


    // while(&j!=(void *)&ol1){
           
    //     i--;
    //     printf("j(%d) |j_adress(%p)|ol1_adress(%p)\n", i, (void *)&j, (void *)&ol1);
    // }

    return 0;

}
