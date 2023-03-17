#include <stdio.h>
#include <stdlib.h>


int sumaArr(int vec[],int);
int main(){
    int dim = 0;
    int a[DIM];
    int a[5];
    a[0]=10;
    a[1]=15;
    a[2]=30;
    a[3]=25;
    a[4]=18;
    dim = sizeof(a)/sizeof(*a);
    printf("\nSuma total: %i:\n", sumaArr(a,DIM));

}
int sumaArr(int vec[],int n){
    int sumatotal;

    for(int i = 0;i<n;i++){
        sumatotal += vec[i];
        sumatotal+=
    }
    return sumatotal;
}
