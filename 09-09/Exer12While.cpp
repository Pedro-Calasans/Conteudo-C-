#include <stdio.h>
int main()
{
	int n1,i,tab;
	printf("Digite n1:");
	scanf("%d",&n1);
	while((n1<2 || n1>9)){
		printf("Digite  novamente n1:");
		scanf("%d",&n1);
	}
	for(i=0;i<=10;i++){
		tab=n1*i;
		printf("A tabuada de %d por %d =%d \n",n1 ,i ,tab);
	}
}
