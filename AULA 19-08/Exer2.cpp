#include <stdio.h>
int main()
{
 const float pi=3.141592;
 float a,r,res;
 printf("Digite o valor do raio\n");
 scanf("%f",&r);
 printf("Digite a altura\n");
 scanf("%f",&a);
 res=pi*r*r*a;
 printf("Volume=%f",res);
}
