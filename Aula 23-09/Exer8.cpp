#include <stdio.h>
#define TAM 10
#include <time.h>
#include <stdlib.h>
int main()
{
	int i,erro[TAM],vetor[TAM],res,respp,j;
    res=64;
	for(i=0;i<TAM; i++){
		
		srand(time(NULL));
		res = rand() % 101; 	
		printf("Acerte o numero ai !!! Tentativa %d\n",i);
		scanf("%d",&respp);
		
		for(j=0;j<i;j++){
			
    	while(respp==erro[j]){
		   	printf("Respostas ja escolhida digite novamente\n");
			scanf("%d",&respp);
		}
	    }
	    erro[i] = respp;
		if(res>respp)   printf("O valor = maior!!");
		if(res<respp)	printf("O valor = menor!!");
		if(respp==res) i=11;		
			}	

}
