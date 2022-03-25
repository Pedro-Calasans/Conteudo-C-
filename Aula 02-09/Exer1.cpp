#include <stdio.h>
int main()
{
	char letra;
	printf("Digite a letra\n");
	scanf("%c",&letra);
	printf("O seu sucessor na tabela char =%c\n",letra+1);
	printf("O seu antecessor na tabela char =%c\n",letra-1);
	return 0;
}
