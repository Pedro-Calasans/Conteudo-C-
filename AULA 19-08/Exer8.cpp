#include <stdio.h>
int main()
{
	float im,sl,sf;
	int dia;
	printf("Digite os dias\n");
	scanf("%d",&dia);
	sl=dia*50;
	im=sl*0.08;
	sf=sl-im;
	printf("O salario final =%f",sf);
}
