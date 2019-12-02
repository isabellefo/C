#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char nome[10];
  char sobrenome[10];
  char nascimento[10];
  char admissao[10];
  int rg;
  float salario;

}empregado;

int main(void) {
  empregado empregados[5];

  for(int i = 0; i<1; i++){

    fgets(empregados[i].nome, 10, stdin);
    fgets(empregados[i].sobrenome, 10, stdin);
    fgets(empregados[i].nascimento, 10, stdin);
    fgets(empregados[i].admissao, 10, stdin);
    scanf("%d", &empregados[i].rg);
    scanf("%f", &empregados[i].salario);
  }  

  for(int i = 0; i<1; i++){
    printf("Nome:%s", empregados[i].nome);
    printf("Sobrenome:%s", empregados[i].sobrenome);
    printf("Nascimento:%s", empregados[i].nascimento);
    printf("Admissão:%s", empregados[i].admissao);
    printf("RG:%d\n", empregados[i].rg);
    printf("Salário:%f\n", empregados[i].salario);
  }  
    
  return 0;
}
