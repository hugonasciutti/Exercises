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

int argOk(const char **argv) {
  if (argv[1] == 0) {
    printf("Insira o nome de um arquivo.\n");
    exit(-1);
  }
  return 0;
}

int main(int argc, char const *argv[]) {
    argOk(argv);

    char *file_name;
    char file_char;
    int size;
    char all[1000];
    FILE * fPointer;
    fPointer = fopen(file_name, "r");
    strcpy(file_name, argv[1]);
    int file_size = fsize(file_name);
    while(file_char != EOF) {
      printf("size: %d\n", fgets(all, 100, fPointer));
      file_char = fgetc(fPointer);
    }

    printf("%d", file_size);


  return 0;
}
