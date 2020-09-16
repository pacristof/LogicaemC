#include <stdio.h>

int main() {

char a1, b2, c3;
char respa, respb, respc;
char s_n;
int x1=0, x2=0,ponto=0, apr=0;

printf("\t\t\t Insira o gabarito: \t\t\n\n");
printf("Questao 1: \n");
scanf("%c" , &a1);
printf("Questao 2: \n");
scanf(" %c" , &b2);
printf("Questao 3: \n");
scanf(" %c" , &c3);

do{
  printf("\t\t\t Insira as respostas: \t\t\n\n");
  printf("Resposta 1: \n");
  scanf(" %c", &respa);
  printf("Resposta 2: \n");
  scanf(" %c" , &respb);
  printf("Resposta 3: \n");
  scanf( " %c" , &respc);
  
  ponto=0;
  if (a1==respa)
    ponto++;
    if (b2==respb)
     ponto++;
     if (c3==respc)
     ponto++;
     if (ponto>=2){
       printf("\t\t\t Aprovado com a nota %i \n" , ponto);
       apr++;
     }else{
       printf("\t\t\t Reprovado com a nota %i \n" , ponto);
     }
       x2++;
       x1=x1+ponto;

       printf("\n\t\t Deseja continuar corrigindo?\t");
       scanf(" %c" , &s_n);
}while (!(s_n == 'n'));
 


      printf("\nQuantidade de provas corrigidas: %d \n" , x2);
      printf("Media das notas: %.2f\n", (float) x1/x2 );
      printf("Aprovados: %d\n", apr);
      printf("Taxa de aprovacao: %.2f%% \n" , apr /(float)x2*100.0);
     printf("-------------------------------");
  


  }
