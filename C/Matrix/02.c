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
    //setbuf is important before every allocation, i don't know why, but the application crashes without it;
    setbuf(stdin, NULL);
    document[row] = (char *) malloc(row_size * sizeof(char));
    printf("document[%d]: ", row);
    scanf("%s", document[row]);
  }

  printf("\nPrinting:\n");
  for(row = 0; row < size; row++) {
    // document[row] has an array of characters, it is already being printed by %s, you don't need to read char by char with another for(y);
    // document[row] = ['w','o','r','d','\0'] == "row";
    // \0 is important to sign the end of an string;
    printf("document[%d] = %s\n", row, document[row]);
  }

  printf("\nFinished.\n");

  return 0;
}
