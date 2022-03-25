#include <stdio.h>
int main()
{
	int i,n;
	
	printf("Digite o numero: ");
	scanf("%d",&n);
	while(n<0){
		printf("Digite novamente");
		scanf("%d",&n);
	}
	
	for(i=n;i!=-1;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}
