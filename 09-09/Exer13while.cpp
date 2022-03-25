#include <stdio.h>
int main()
{
	int n1,i,tab,res,cont;
	printf("Digite n1:");
	cont=0;
	scanf("%d",&n1);
	while((n1<2 || n1>9)){
		printf("Digite  novamente n1:");
		scanf("%d",&n1);
	}
	for(i=0;i<=10;i++){
		res=n1*i;
		printf("A tabuada de %d por %d =: \n",n1 ,i );
		scanf("%d",&tab);
		if(tab==res){
			cont=cont+1;
		}
		
	}
	printf("O numero de acertos foi %d",cont);
}
