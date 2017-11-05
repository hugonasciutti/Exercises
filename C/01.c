#include <stdio.h>
#include <stdlib.h>


int main() {
 int i, x;

 for(i = x = 0; i < 5; i++) {
     printf("meu x: %d\n", x);
     printf("meu i: %d\n", i);
     x++;
 }

 return 0;
}
