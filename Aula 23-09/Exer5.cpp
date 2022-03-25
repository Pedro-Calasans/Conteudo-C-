#include <stdio.h>
#define TAM 10
int main()
{  
	int i,teste1[TAM],teste2[TAM],soma,mul,mo;
	for(i=0; i<TAM; i++){
		printf("Numero: ");
		scanf("%d",&teste1[i]);	
	}
	for(i=0; i<TAM; i++){
		mo=teste1[i]%2;
		if(mo==0){
			teste2[i]=teste1[i]*5;
		}else{
			teste2[i]=teste1[i]+5;
		} 
	}
	for(i=0; i<TAM; i++){
		printf("Vetor1 = %d\n",teste1[i]);
		printf("Vetor2 = %d\n",teste2[i]);
	}	
	
			
}
