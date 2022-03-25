#include <stdio.h>
int main()
{
  int n1,n2,n3,n4,n5;
  float med;
 
  printf("Digite o primeiro numero\n");
  scanf("%d",&n1);
  printf("Digite o segundo numero\n");
  scanf("%d",&n2);
  printf("Digite o terceiro numero\n");
  scanf("%d",&n3);
  printf("Digite o quarto numero\n");
  scanf("%d",&n4);
  printf("Digite o quinto numero\n");
  scanf("%d",&n5);	
  med=(float) (n1+n2+n3+n4+n5)/5;
  printf("Media=%f",med);
}
