#include <stdio.h>
int main()
{
	int a;
	do{
	
	printf("Digite o valor:");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("A opcao 1 foi selecionada\n");
			break;
	
		case 2:			
			printf("A opcao 2 foi selecionada\n");
			break;
		default: 
			printf("Opcao %d nao existe\n",a);
			break;	
}
   	}while(a>=0);	
} 
