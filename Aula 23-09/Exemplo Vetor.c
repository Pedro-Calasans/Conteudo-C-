#include <stdio.h>
#define TAM 10
int main()
{
	int i,num[TAM],maior,menor,imaior,imenor;
	char res;
	printf("Quer iniciar o programa (s,n)\n");
	scanf("%c",&res);
	while(res!='n' && res!='s')
	{
		printf("Digite novamente\n");
		scanf(" %c",&res);
	}
	if(res == 's'){
		printf("digite 10 numeros positivos");
		for(i=0; i<TAM; i++){
			scanf("%d",&num[i]);
	 	}

	 	menor=num[0];
	 	maior=num[0];
		imenor=0;
	   	imaior=0;
		 for(i=0;i<TAM;i++){
	 		if(num[i]<menor) menor=num[i];
	 		if(num[i]>maior)  maior=num[i];
 	 		
		 }
		printf("O maior(%d) = %d\n menor(%d) = %d",maior ,i  ,menor ,i);
	
	}
	
	
	
   return 0;
}
