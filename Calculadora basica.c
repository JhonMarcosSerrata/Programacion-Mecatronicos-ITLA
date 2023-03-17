#include <stdio.h>

int main(){
char operador;
float primernumero, segundonumero, resultado;

printf("Ingrese un operador: +,-,*,/\n");
scanf("%c",&operador);

printf("Ingrese los numeros\n");
scanf("%.1lf %.1lf",&primernumero,&segundonumero);


switch(operador){
case'+':
    printf("%.1lf + %.1lf = %.1lf",&primernumero,&segundonumero,primernumero+segundonumero);
    break;
case'-':
    printf("%.1lf - %.1lf = %.1lf",primernumero,segundonumero,primernumero-segundonumero);
    break;
case'*':
    printf("%.1lf * %.1lf = %.1lf",primernumero,segundonumero,primernumero*segundonumero);
    break;
case'/':
    printf("%.1lf / %.1lf = %.1lf",primernumero,segundonumero,primernumero/segundonumero);
    break;
}

return 0;
}
