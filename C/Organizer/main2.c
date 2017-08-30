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
  FILE * fWrite;

  char *file_name = (char *) malloc(strlen(argv[1]) * sizeof(char));

  int i = 0;
  for(i = 0; i < strlen(argv[1]); i++) {
    file_name[i] = argv[1][i];
  }

  fPointer = fopen(file_name, "r");

  int file_size = fsize(file_name);
  char ch;

  int x = 0,
      new_file = 0,
      file_number = 0;

  while(1) {
    ch = fgetc(fPointer);

    if(ch == '/'){
      if(fgetc(fPointer) == '*') {
        file_number++;

        if(file_number < 9) {
          sprintf(file_name, "0%d.c", file_number);
        } else {
          sprintf(file_name, "%d.c", file_number);
        }

        while(1) {
          fWrite = fopen(file_name, "a");
          ch = fgetc(fPointer);
          fprintf(fWrite, "%c", ch);
          printf("%c\n", ch);
          if(ch == '*'){
            if(fgetc(fPointer) == '/') {
              break;
            }
          }

        }
      }
    }


    if(feof(fPointer)) {
      break;
    }
    x++;
  }

  fclose(fPointer);

  return 0;
}
