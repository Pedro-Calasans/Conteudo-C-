#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char nome[10];
	char abr[4];
	int dias;
}Meses;
int main(){
	Meses a;
	printf("Nome:\n");
	fgets(a.nome,sizeof(a.nome),stdin);
	fflush(stdin);
	printf("Abreviacao: \n");
	fgets(a.abr,sizeof(a.abr),stdin);
	fflush(stdin);
	printf("Dias:\n");
	scanf("%d",&a.dias);
	printf("Nome:%s\nAbreviacao:%s\nDias:%d\n",a.nome,a.abr,a.dias);

	

}
