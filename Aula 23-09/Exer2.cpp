#include <stdio.h>
#define TAM 7
int main()
{
    int i,maior,menor;
	float num[TAM],med,tot = 0;
    

	for(i=0; i<TAM; i++){
		printf("Digite o numero \n");
		scanf("%f",&num[i]);
		if(i==0) {
			menor=num[0];	maior=num[0];
		}
		if(num[i]<menor) menor=num[i];
		if(num[i]>maior) maior=num[i];
	
	    tot=tot+num[i];
	}
	
	med=tot/7.0;
	printf("MED = %f\n",med);
	printf("maior= %d\nmenor =%d",maior ,menor);
	return 0;
	

}
