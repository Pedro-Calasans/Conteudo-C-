#include <stdio.h>
int main()
{
	int n1,i;
	
    while(n1<500){
	printf("Digite n1:");
	scanf("%d",&n1);
	for(i=n1;i<500; i++){
		printf("%d:",i);
	}
	printf("Digite n1:");
	scanf("%d",&n1);
}
}

