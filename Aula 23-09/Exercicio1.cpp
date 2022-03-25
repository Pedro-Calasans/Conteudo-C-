#include <stdio.h>
#define TAM 10
int main()
{
	float num[TAM];
	int i;
	for(i==0; i<TAM; i++){
		printf("Digite o numero\n");
		scanf("%f",&num[i]);
		}
   for(i=0; i<TAM; i++){
   		printf("Ordem=%f \n",num[i]);
   }
   printf("\n");
   for(i=9; i>=0; i--){
   		printf("Fora de ordem=%f \n",num[i]);
   }
	return 0;	
}

