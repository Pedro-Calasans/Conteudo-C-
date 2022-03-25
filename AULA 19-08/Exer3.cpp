#include <stdio.h>
int main()
{
  int m;
  float cm;
  printf("Digite o metro a ser convertido\n");
  scanf("%d",&m);
  cm=(float) m*100;
  printf("Cm=%f",cm);
}
