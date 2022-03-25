#include <stdio.h>
#define TAM 10
int main()
{
	int num[TAM],i;
	for(i=0; i<TAM; i++){
		printf("Numero: ");
		scanf("%d",&num[i]);
	}
	printf("1 OU 0??");
	scanf("%d",&i);
	while(i!=0 && i!=1){
		printf("1 OU 0??");
		scanf("%d",&i);
		}
    if(i==1){
		for(i=0; i<TAM; i++){
			printf("Numero: %d \n",num[i]);
    }
	}
	if(i==0){
		for(i=9; i>=0; i--){
			printf("Numero: %d \n",num[i]);
	}
}
}
