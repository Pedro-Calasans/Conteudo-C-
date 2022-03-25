#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[10],letra;
	int i,a;
	a=0;
	printf("Digite uma palavra\n");
	fgets(str, 10, stdin);
	fflush(stdin);
	printf("Digite uma letra\n");
	scanf("%c",&letra);
	for(i=0;i<10;i++){
		if(letra==str[i]){
			printf("A letra tem na stringa na posicao %d\n",i);
			a=1;
		}
	}
	if(a==0) printf("Nao existe a letra nessa string\n ");
	return 0;
}
