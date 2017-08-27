#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

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

  char *ch;
  ch = (char *) malloc(file_size * sizeof(char));

  int x, y, i;

  while(i < file_size) {
      ch[i] = fgetc(fPointer);

      if(*ch == EOF) {
        break;
      }
      i++;
  }

  return 0;
}
