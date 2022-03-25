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
	if (ope=='+'){
	  p=n1+n2;
	  printf("Soma=%d",p);
	}
	if (ope=='-'){
	  p=n1-n2;
	  printf("Sub=%d",p);
	}
   	if (ope=='*'){
	  p=n1*n2;
	  printf("Multi=%d",p);
	}	
	if (ope=='/'){
	  p=n1/n2;
	  printf("Div=%d",p);
	}
	if ((ope!='-') && (ope!='+') && (ope!='*')  && (ope!='/')){
		printf("Operacao invalida");
	}
	return 0;
}
