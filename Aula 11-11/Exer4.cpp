#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char nome[10];
	char abr[4];
	int dias;
}Meses;
int main(){
	char abr2[10];
	Meses m[12] = {{"janeiro","jan",30},{"fevereiro","fev",30},{"marco","mar",30},{"abril","abr",30},{"maio","mai",30},{"junho","jun",30},{"julho","jul",30},{"agosto","ago",30},{"setembro","set",30},{"outubro","out",30},{"novembro","nov",30},{"dezembro","dez",30}};
	int i,n,j=0,l=-1,dia;
    printf("Digite  \n");
	fgets(abr2,sizeof(abr2),stdin);
	printf("Digite o dia");
	scanf("%d",&dia);
	do{
		l++;
		if(abr2[l]=='\n') abr2[l]='\0';
	}while(abr2[l] !='\0');
	
	
	printf("%s",abr2);
	
	for(i=0;i<12;i++){
	    //i = 0;
		//while((strcmp(m[i].abr, abr2)) != 0 || (strcmp(m[i].nome, abr2)) !=0) i++;
		//n=i;
		
			  printf("comparando -%s- com -%s-\n",m[i].abr, abr2 );
		    printf("comparando -%s- com -%s-",m[i].nome, abr2 );
	
		
		if((strcmp(m[i].abr, abr2)) == 0 || (strcmp(m[i].nome, abr2)) ==0){
		  break;	
		} 
		
	}
	
	for(n =0 ; n < i; n++){
			j=m[n].dias+j;
			
		}
   
    dia=360-dia;
	printf("O numero de dias=%d",dia);
	return 0;
}
