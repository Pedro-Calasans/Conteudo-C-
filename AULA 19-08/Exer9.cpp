#include <stdio.h>
int main()
{
	const int piso=7;
	float v1,m2,d,pf;
	printf("Digite o valor da area\n");
	scanf("%f",&m2);
    d=m2/0.09;
    pf=d*piso;
    printf("Vc precisa de %f pisos e o valor= %f",d,pf);
    return 0;
    
}

