#include <stdio.h>
#include <conio.h>
int main()
{
	char letra;
	printf("Digite a letra\n");
	scanf("%c",&letra);
	letra=letra-32;
	printf("Sua letra maiuscula=%c\n",letra);
	return 0;
}
