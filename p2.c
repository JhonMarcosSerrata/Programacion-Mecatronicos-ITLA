#include <stdio.h>

typedef struct { /* Declaraci�n de la estructura alumno. */
int matricula;
char nombre[20];
int carrera;
float promedio;
} alumno;
void lee(FILE *); /* Prototipo de funci�n. */
void main(void)
{
FILE *ar;
if ((ar = fopen ("ad1.dat", "r")) != NULL) escribe(ar);
else
printf("\nEl archivo no se puede abrir");
fclose(ar);
}
void lee(FILE *ap)
/* Esta funci�n se utiliza para leer bloques de un archivo de acceso directo. */
{
alumno alu;
fread(&alu, sizeof(alumno), 1, ap);

while (!feof(ap))
{
printf("\nMatr�cula: %d", alu.matricula);
printf("\tCarrera: %d", alu.carrera);
printf("\tPromedio: %f\t ", alu.promedio);
puts(alu.nombre);
fread(&alu, sizeof(alumno), 1, ap);
}
}
