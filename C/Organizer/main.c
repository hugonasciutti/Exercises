#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Armazenar na matrix e imprimir valores.

off_t fsize(const char *filename) {
  struct stat st;

  if (stat(filename, &st) == 0)
      return st.st_size;

  return -1;
}

int main(int argc, char const *argv[]) {
  FILE * fPointer;
  fPointer = fopen("fileTeste.c", "r");

  int file_size = fsize("fileTeste.c");
  int file_size
  char **file_content = (char **) malloc(file_size * sizeof(char));

  int x = 0,
      y = 0;

  while(x < file_size) {
    file_content[x][y] = fgetc(fPointer);

    if(file_content[x][y] == '\n') {
      // printf("%c\n", &file_content[x][y]);
      y++;
    }

    if(file_content[x][y] == EOF) {
      break;
    }

    x++;
  }
  // printf("file_content[%d][%d]: %c\n", 3, 0, file_content[3][0]);
  return 0;
}
