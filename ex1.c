#include <stdio.h>

int main(void) {
  int sinal;

  //sendo 1 vermelho , 2 verde, 3 amarelo
  printf("Representando 1 vermelho, 2 verde e 3 amarelo \n");
  printf("Digite o número corresponde a cor do sinal de 1 a 3: \t ");
  
  scanf("%i" ,&sinal);

switch(sinal){
  case 1:
  printf("A proxima cor do sinal eh verde!");
  break;

  case 2:
  printf("A proxima cor do sinal eh amarelo!");
  break;

  case 3:
  printf("A proxima cor do sinal eh vermelho!");
  break;

default:
printf("Codigo de cor invalido!");

  }

}