#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sizeA;
    int Age[sizeA];

    printf("Ingrese el tamaño de la tabla:\n");
    scanf("%i", &sizeA);

    for (int i = 0; i < sizeA ; i++)
    {
        printf("Ingrese el valor\n", i+1);
        scanf("%i",&Age[i]);
        /* code */
    }

    printf("Los valores son:\n");
    for (int i = 0; i < sizeA; i++)
    {
        /* code */
        printf("%s\n", Age[i]);

    }

    /* code */
    return 0;
}
