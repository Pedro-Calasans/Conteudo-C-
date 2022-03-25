#include <stdio.h>
int main()
{
	int x,y;
	printf("Digite x:");
	scanf("%d",&x);
	printf("Digite y:");
	scanf("%d",&y);
	while(y<x){
		printf("Digite um valor de y maior que x:");
		scanf("%d",&y);
	}
	printf("O valor de x= %d e y=%d",x ,y);
	return 0;
}
