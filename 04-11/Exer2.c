#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char nome[10];
	char abr[4];
	int dias;
}Meses;
int main(){
	int i,n,j=0;
	Meses a[12];
	for(i=0;i<12;i++){
		a[i].dias=30;
	}
	printf("Numero:\n");
   	scanf("%d",&n); 
    for(i=0;i<12;i++){
		if(i<n) j=a[i].dias+j;
  		 
	 }
	printf("O numero de dias=%d",j);
	return 0;
}

