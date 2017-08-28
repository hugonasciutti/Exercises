#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Persiste dados em um novo arquivo assim que encontrar /* e termina em */

off_t fsize(const char *filename) {
  struct stat st;

  if (stat(filename, &st) == 0)
      return st.st_size;

  return -1;
}

int main(int argc, char const *argv[]) {

  if (argv[1] == 0) {
    printf("Insira o nome de um arquivo.\n");
    return -1;
  }

  FILE * fPointer;

  char *file_name = (char *) malloc(strlen(argv[1]) * sizeof(char));

  int i = 0;
  for(i = 0; i < strlen(argv[1]); i++) {
    file_name[i] = argv[1][i];
  }

  printf("%s\n", file_name);
  fPointer = fopen(file_name, "r");

  int file_size = fsize(file_name);
  char ch;

  int x = 0,
      y = 0;

  while(x < file_size) {
    ch = fgetc(fPointer);
    
    if(ch == '\n') {
      y++;
    }

    if(ch == EOF) {
      break;
    }

    x++;
  }
  return 0;
}
