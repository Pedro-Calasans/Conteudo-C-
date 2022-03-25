#include <stdio.h>
int main()
{
  int id,vt,sl;
  float por,im,sf;
  
  printf("Digite o id do vendedor\n");
  scanf("%d",&id);
  printf("Digite o salario fixo\n");
  scanf("%d",&sl);
  printf("Digite o valor total de vendas\n");
  scanf("%d",&vt);
  printf("Digite o porcentual\n");
  scanf("%f",&por);
  im=(float) vt*por;
  sf=im+sl;
  printf("Id=%d e o salario final=%f",id,sf);  
}
