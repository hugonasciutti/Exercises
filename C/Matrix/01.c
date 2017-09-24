#include <stdio.h>
#include <stdlib.h>

/*
Simple matrix dynamic allocated
Hugo Nasciutti
2017
*/


int main(int argc, char const *argv[]) {
  int **document;
  int size = 3;
  int x = 0, y = 0;

  document = (int **) malloc(size * sizeof(int *));
  if (document == NULL)
  {
     fprintf (stderr, "problema na alocação\n");
     return 5;
  }

  for(x = 0; x < size; x++) {
    document[x] = (int *) malloc(size * sizeof(int));
    if (document[x] == NULL)
    {
      fprintf (stderr, "problema na alocação\n");
      return 5;
    }

    for(y = 0; y < size; y++) {
      printf("document[%d][%d] = ", x, y);
      scanf("%d", &document[x][y]);
    }
  }

  for(x = 0; x < size; x++) {
    for(y = 0; y < size; y++) {
      printf("document[%d][%d] = %d\n", x, y, document[x][y]);
    }
  }

  return 0;
}
