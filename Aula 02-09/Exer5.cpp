#include <stdio.h>
int main()
{
    char letra;
	printf("Digite a letra ");
	scanf("%c",&letra);
	if (letra>=96 && letra<=122)
	{
		printf("Letra maiscula=%c",letra-32);
	}
	if (letra>=60 && letra<=90)
	{
		printf("Letra minuscula=%c",letra+32);
	}
	return 0;
}
