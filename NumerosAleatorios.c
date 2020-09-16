#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {

  int a, b;
  int i , x, y=0 ;
  
  printf("\t\t\t----GERADOR DE NUMEROS ALEATORIOS----\n\n");
  printf("\t\tInsira um numero para a: ");
  scanf("%i" , &a); 
  srand(a);
  
   do{ 
       printf("\n\t\tInsira um numero para b: ");
    scanf("%i", &b);
     }while (b<1 || b >20);
      printf ("\n\t Numeros gerados: "); 
        for (i=0; i<30; i++)
   {
      x=1 + rand() % 20;
      printf("%i ", x);
      
    if(x==b){ y++; }
   }
    if(y>0){
     printf("\n\n\t\t\t O valor foi encontrado %i vezes", y);
    }else {
      printf("\n\n\t\t\t O valor nao foi encontrado");
    }
    

  return 0;
}