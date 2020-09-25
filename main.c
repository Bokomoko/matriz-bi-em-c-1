#include <stdio.h>
#include <stdlib.h>
// matrixes library with 2 functions (so far)
#include "matrixes.h"



int main(void) {
  int** matriz ;

  matriz = alocarMatriz(4,5);
  printMatriz(matriz,4,5);
  return 0;
}