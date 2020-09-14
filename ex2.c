#include <stdio.h>

int main() {
    char nome[20] , saude;
    int idade;
    float peso;

    printf("Digite seu nome:\n");
    fgets (nome, 20 , stdin);

    printf("Digite sua idade:\n");
    scanf("%i" , &idade);

    printf("Digite seu peso: \n");
    scanf("%f" , &peso);

    printf("Qual a sua condicao de saude? Digite b para boa e r para ruim: \n");
   scanf(" %c" , &saude);
   getchar();
   
   if ((idade >=18 && idade <69) && (peso >=50) && (saude == 'b'))

   printf("Você pode doar sangue!");
   
   else{
     printf("Você nao pode doar sangue!");
   }

   return 0;
}