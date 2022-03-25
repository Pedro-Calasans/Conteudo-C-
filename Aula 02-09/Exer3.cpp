#include <stdio.h>
#include <conio.h>
int main()
{
	char letra;
	printf("Digite a letra\n");
	scanf("%c",&letra);

	if (letra>96 && letra<123)
	{
	 printf("Sua letra maiuscula=%c\n",letra-32);
	}else{
	
	printf("LETRA INVALIDA");
 }
	return 0;
}
