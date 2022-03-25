#include <stdio.h>
int main()
{
	int x,y,cont;
	printf("Digite x:");
	scanf("%d",&x);
	printf("Digite y:");
	scanf("%d",&y);
	while(x>y){
		printf("Digite y novamente\n");
		scanf("%d",&y);
	}
	while(y>x){
		x=x*2;
		printf("x = %d\n",x);
		cont=cont+1;
	}
	printf("O numero de vezes para x>y foi %d e o resultado final foi %d",cont ,x);
	return 0;
}
