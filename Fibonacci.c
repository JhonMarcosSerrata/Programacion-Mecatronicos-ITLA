#include<stdio.h>

int main(){
  int a = 1, b = 0, i;

  for(i = 0; i < 10; i++){
    printf("%d:\n",b);
    printf("%d:\n",a);
    b = b + a;
    a = a + b;
  }
  return 0;
}
