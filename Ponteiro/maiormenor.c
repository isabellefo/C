#include <stdio.h>

void MaiorMenorValor(int *v, int *ma, int *me);

int main(void) {
  int vetor[6]={10,5,7,3,1,8};
  int maior;
  int menor;

  MaiorMenorValor(vetor, &maior, &menor); 

  printf("Maior:%d\n", maior);
  printf("Menor:%d\n", menor);

  return 0;
}

void MaiorMenorValor(int *v, int *ma, int *me){
  int i=0;
  *me=*v;
  *ma=*v;
  
  for(;i<6;i++){
    if(*me<*v){
      *me=*v;
    }
    if(*ma>*v){
      *ma=*v;
    }
    //incremento do ponteiro (próxima posição)
    v++;    
  }

}
