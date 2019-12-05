#include <stdio.h>

typedef struct{
  int real;
  int imaginario;
}complexo;

void soma(complexo a, complexo b);
void multi(complexo a, complexo b);
void imprimir(int a, int b);

int main(void) {

  printf("Hello World\n");

  complexo a;
  complexo b;

  scanf("%d %d", &a.real, &a.imaginario);
  scanf("%d %d", &b.real, &b.imaginario);

  soma(a,b);
  multi(a,b);

  return 0;
}


void soma(complexo a, complexo b){
  int r;
  int i;

  r=a.real+b.real;
  i=a.imaginario+b.imaginario;

  imprimir(r, i);

}

void multi(complexo a, complexo b){
  int r;
  int i;

  r=(a.real*b.real)-(a.imaginario*b.imaginario);
  i=(a.real*b.imaginario)+(b.real*a.imaginario);

  imprimir(r, i);

}

void imprimir(int a, int b){
  printf("%d + %di\n", a, b);
}
