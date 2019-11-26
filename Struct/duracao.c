#include <stdio.h>
#include<stdlib.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}dma;

dma fim_evento(dma datainicio, int duracao);

int main(void) {
  dma x;
  dma y;
  int duracao;

  scanf("%d/%d/%d", &x.dia,&x.mes,&x.ano);
  scanf("%d", &duracao);

  y = fim_evento(x,duracao);

  printf("%d/%d/%d", y.dia,y.mes,y.ano);

  return 0;
}

dma fim_evento(dma datainicio, int duracao){
  dma datafim;
  
  datafim.mes = datainicio.mes;
  datafim.ano = datainicio.ano; 

  //determinar quantos dias
  datafim.dia = datainicio.dia + (duracao%30);

  //caso passe dos 30 dias
  if(datafim.dia > 30){
    datafim.dia = (datainicio.dia + duracao) % 30;
    datafim.mes=datafim.mes + 1;
  }

  //determinar quantos meses
  datafim.mes=datafim.mes+(duracao/30);


  //caso passe de 12 meses
  if(datafim.mes>12){
    datafim.mes = datafim.mes%12;
    datafim.ano = datafim.ano + 1;
  }

  //determinar quantos anos
  datafim.ano = datafim.ano + (duracao/360);

  return datafim;
}
