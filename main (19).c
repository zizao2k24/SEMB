/**/
#include <stdio.h>
float M, A, B;
float number = 3.14;
void calcula(void); //protóipo de função
void entra_dados(void); //protótipo de função
void mostrar_resultaados(void); //protóipo de função

int main()

{
  while (1)
  {
      entra_dados(); //chamada de função
     calcula(); //chamada de função
      mostrar_resultaados(); //chamada de função
      
      
     
  }
}
void calcula(void) //função
{
    M = (A + B)/2; 
}
void entra_dados(void) //função
{
printf("\n\nPrograma de soma. \n");
      printf("entre com o primeiro numero: ");
      scanf("%f", &A);
      printf("entre com o segundo numero: ");
      scanf("%f", &B);
}
void mostrar_resultaados(void) //função
{
printf("sua média é: %.2f", M);
      if (M < 50) printf("você foi reprovado.\n\n");
      else printf("que arraso, você passou. \n\n");
}