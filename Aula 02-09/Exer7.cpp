#include <stdio.h>
int main()
{
    char ope;
	int n1,n2,p;
	printf("Digite o n1\n");
	scanf("%d",&n1);
	printf("Digite o n2\n");
	scanf("%d",&n2);
	printf("Digite a operacao\n ");
	scanf(" %c",&ope);
	switch(ope){
	case '+':
	  p=n1+n2;
	  printf("Soma=%d",p);
	 break;
	case '-':
	  p=n1-n2;
	  printf("Sub=%d",p);
     break;	
   	case '*':
	  p=n1*n2;
	  printf("Multi=%d",p);
	 break;	
	case '/':
	  p=n1/n2;
	  printf("Div=%d",p);
     break;	
	default:
		printf("Operacao invalida");
	  break;
	}
	return 0;
}

