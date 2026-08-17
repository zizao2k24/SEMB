/**/
#include <stdio.h>
float M, A, B;
float number = 3.14;

void calcula(void)
{
    M = (A + B)/2; 
}

int main()
{
  while (1)
  {
      printf("\n\nPrograma de soma. \n");
      printf("entre com o primeiro numero: ");
      scanf("%f", &A);
      printf("entre com o segundo numero: ");
      scanf("%f", &B);
     calcula();
      printf("sua média é: %.2f", M);
      if (M < 50) printf("você foi reprovado.\n\n");
      else printf("que arraso, você passou. \n\n");
      
      
     
  }
}