#include <stdio.h>
int main()
{
	int n1,n2,i;
	printf("Digite n1:");
	scanf("%d",&n1);
	printf("Digite n2:");
	scanf("%d",&n2);
	while((n2<0 || n2>2)){
		printf("Digite n2 novamente:");
		scanf("%d",&n2);
	}
	if(n2==0){
	
		for(i=n1;i!=-1; i--){
			printf("%d\n",i);
		}
	}
	if(n2==1){
		for(i=0;i<=n1;i++){
		
			printf("%d\n",i);
		}
	}	
		

	
}
