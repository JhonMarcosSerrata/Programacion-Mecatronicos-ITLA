#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(){

   char operador;
   int nx, ny;
  

   printf("\nIngrese la operacion que desea realizar(+, -, *, /) : ");
   scanf("%C", &operador);

    
    printf("\nIngrese el primer numero: ", nx);
    scanf( "\n%i", &nx);
    printf("\nIngrese el segundo numero: ", ny);
    scanf( "\n%i", &ny);
    

    switch(operador){
        case '+':
          printf( "%i + %i = %i\n", nx, ny, nx + ny);
          break;
        
        case '-':
          printf("%i - %i = %i\n", nx, ny, nx - ny);
          break;

        case '*':
          printf("%i * %i = %i\n", nx, ny, nx * ny);
          break;

        case '/':
          printf("%i / %i = %i\n", nx, ny, nx / ny);
          break;
        
    }

    system("pause");

    return 0;

}