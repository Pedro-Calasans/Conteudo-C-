#include <stdio.h>
int main()
{
	int a,c;
	do{
		printf("Digite a\n");
		scanf("%d",&a);
		c=a%2;
		if(c==0){
			printf("O numero %d = par\n",a);
		}else{
			printf("O numero %d = impar\n",a);
		}
			
		}while(c==0);
}
