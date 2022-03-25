#include <stdio.h>
#define TAM 16
int main()
{
	int i;
	float num[TAM];
	for(i=0; i<TAM; i++){
		printf("Numero: ");
		scanf("%f",&num[i]);
  	}
  	for(i=15; i>=7; i--){
  		printf("%f\n",num[i]);
    }for(i=0; i<7; i++){
	 	printf("%f\n",num[i]);
}
  		
}
