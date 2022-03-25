#include <stdio.h>
int main()
{
	int n,i,x;
	printf("Digite n:");
	scanf("%d",&n);
    x=-n-1;
	while(n<0){
		printf("Digite novamente:");
		scanf("%d",&n);
	}
	for(i=n;i!=x;i--){
		printf("%d\n",i);
	}
	
}
