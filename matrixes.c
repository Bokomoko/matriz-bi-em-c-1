#include <stdio.h>
#include <stdlib.h>

// dynamic allocates a two dimension matrix

int** alocarMatriz(int Linhas,int Colunas){ 
  // Number of lines = linhas
  // number of columns = colunas
  // returns a pointer to a list of pointer 
  
  
  
 // Allocate an array of pointers
   int **m = (int**) malloc(Linhas * sizeof(int*)); 
  
  for (int i = 0; i < Linhas; i++){ 
    // for each line in the array of pointers ... 
       m[i] = (int*) malloc(Colunas * sizeof(int)); 
       //Aloccates another array of integer pointers 
       for (int j = 0; j < Colunas; j++){ 
         // for each pointer ...
            m[i][j] = i-j; // Initiliazes with (i - j) .
       }
  }
return m; //Returns the pointer to the allocated matrix
}

// prints a two dimension matrix given a pointer and its # of rows and cols
void  printMatriz(int** m , int Linhas,int Colunas){ 
  //Recebe a quantidade de Linhas e Colunas como Parâmetro
  printf("   COL ->");
  for (int j = 0; j < Colunas; j++){
    printf("%4d ",j);
  };
  printf("\n");
  for (int i = 0; i < Linhas; i++){ //Percorre as linhas do Vetor de Ponteiros
       printf("Linha %2d ",i);
       for (int j = 0; j < Colunas; j++){ //Percorre o Vetor de Inteiros atual.
            printf("%4d ", m[i][j]);
       };
       printf("\n");
  }
return ;
}
