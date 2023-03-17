#include <stdio.h>
#include <stdlib.h>

int main(){
    int c=0;
    int f=0;
    int suma=0;
    int arreglo[4][4];


    for(c=0;c<4;c++)
        for(f=0;f<4;f++)
            arreglo[c][f]=c;

    for(c=0;c<4;c++)
    {
        for(f=0;f<4;f++)
            printf("%d",arreglo[c][f]);
            printf("\n");
    }

return 0;
}
