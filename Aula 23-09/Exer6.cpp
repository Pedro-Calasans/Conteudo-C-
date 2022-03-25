#include <stdio.h>
int main()
{
	int i,vetor[3],aux;
	for(i=0;i<3;i++){
		printf("Numero: ");
		scanf("%d",&vetor[i]);
	}
	if(vetor[1]==0 ){
		aux=vetor[1];
		vetor[1]=vetor[2];
		vetor[2]=aux;
		}
	if(vetor[0]==0){
		aux=vetor[0];
		vetor[0]=vetor[2];
		vetor[2]=aux;
	}
	for(i=0;i<3;i++){
		printf("%d",vetor[i]);
	}	
}
