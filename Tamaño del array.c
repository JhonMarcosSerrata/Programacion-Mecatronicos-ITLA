#include <stdio.h>
#include <string.h>

int main(){
    printf("Bienvenido");

    struct{

    float promedio;
    char nombre[20];
    }alumno;

    printf("\nTama�o del string:%d\n", sizeof (alumno));

     return 0;
}
