#include <stdio.h>
int main()
{
	int a,b,c;
	float r,s,d;
	printf("Digite o valor de A\n");
	scanf("%d",&a);
	printf("Digite o valor de B\n");
	scanf("%d",&b);
	printf("Digite o valor de C\n");
	scanf("%d",&c);
	a=a*a;
	b=b*b;
	c=c*c;
	s=b+c;
	r=a+b;
    d=(r+s)/2;
    printf("D=%f",d);
	
	return 0;
}
