#include <stdio.h>
int main()
{
	int a,b,c,i,cont,m,d;
	printf("Digite a\n");
	scanf("%d",&a);
	while(a<1){
		printf("Digite A novamente\n");
    	scanf("%d",&a);
	}
	printf("Digite b\n");
	scanf("%d",&b);
	printf("Digite c\n");
	scanf("%d",&c);
	cont=0;

	while(b>c){
		printf("Digite c novamente\n");
		scanf("%d",&c);
	}
	for(i=b+1;i<c;i++){
		m=i%a;
		if(m==0){
		cont=cont+1;
	}
	}
	printf("O numero de numeros diviseis por a = %d",cont);
	
}
