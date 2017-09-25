#include <stdio.h>
#include <stdlib.h>

/*
Creating a dynamic allocated matrix x, y and printing it on the screen
Hugo Nasciutti
2017
*/

int main(int argc, char const *argv[]) {
  char **document;
  int size = 3;
  int row_size = 1;
  int row = 0, y = 0;

  document = (char **) malloc(size * sizeof(char *));

  printf("\nScanning:\n");
  for(row = 0; row < size; row++) {
    document[row] = (char *) malloc(row_size * sizeof(char));
    printf("document[%d]: ", row);
    scanf("%s", document[row]);
  }

  printf("\nPrinting:\n");
  for(row = 0; row < size; row++) {
    // document[row] has an array of characters, word printing is already being handled by %s which is doing a loop until find a \0, you don't need to read char by char with another for(y), the printf %s is taking care of this for you;
    // document[row] = ['w','o','r','d','\0'] == "row";
    // \0 is important to sign the end of an string;
    printf("document[%d] = %s\n", row, document[row]);
  }

  printf("\nFinished.\n");

  return 0;
}
