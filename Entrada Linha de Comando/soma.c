#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    int i;
    int soma=0;
    if(argc == 1){
      printf("Sintaxe correta: Soma param1 param2 ...");
    }else{
      for(i=1;i<=argc;i++){
      soma+=atoi(argv[i]);
      }
    printf("Resultado = %d", soma);
    }

}
