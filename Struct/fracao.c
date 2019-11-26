#include <stdio.h>

typedef struct{
  int den;
  int num;
}Fracao;

void exibefracao(Fracao x);
Fracao somafracao(Fracao x, Fracao y);
Fracao multiplica(Fracao x, Fracao y);
Fracao subtrai(Fracao x, Fracao y);

int main(void) {
  Fracao a;
  Fracao b;
  Fracao c;

  scanf("%d %d", &a.num, &a.den);
  scanf("%d %d", &b.num, &b.den);
  exibefracao(a);
  c = (somafracao(a, b));
  printf("%d/%d\n", c.num, c.den);
  c = multiplica(a, b);
  printf("%d/%d\n", c.num, c.den);
  c = subtrai(a, b);
  printf("%d/%d\n", c.num, c.den);
  return 0;
}

void exibefracao(Fracao x){
  printf("%d/%d\n", x.num, x.den);
}

Fracao somafracao(Fracao x, Fracao y){
    Fracao z;

    int den = x.den*y.den;
    int num = (x.num*y.den)+(x.den*y.num);
    z.den = den;
    z.num = num;

    return z;
}

Fracao multiplica(Fracao x, Fracao y){
    Fracao z;
    int den = x.den*y.den;
    int num = x.num*y.num;
    z.den = den;
    z.num = num;

    return z;
}

Fracao subtrai(Fracao x, Fracao y){
    Fracao z;
    int den = x.num*y.den;
    int num = x.den*y.num;
    z.den = den;
    z.num = num;

    return z;



}
