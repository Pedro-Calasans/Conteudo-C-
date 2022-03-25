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
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",n);
	}
	return 0;
}
