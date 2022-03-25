#include <stdio.h>
#define TAM 7
int main()
{
	char l[TAM],aux,le[TAM];
	int i,j;
	for(i=0;i<TAM;i++){
		printf("Letra:  \n");
		scanf(" %c",&l);
	}
	for(i=0;i<TAM;i++)
		for(j=7;j>=i;j--){
			if(l[i]>l[j]){
				aux=l[j];
				l[j]=l[i];
				l[i]=aux;
					}
		}
	
	for(j=TAM;j<7;j++) printf("letra: %c\n",l[j]);
}

