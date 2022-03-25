#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{ 	
 	int i;
	char str[8];
	printf("Digite a as letras");
	fgets(str, 8, stdin);
	for(i=0;i<8; i++ ){
		if((str[i]=<'z') && (str[i]>='a'))
		str[i]=str[i]-32;
	}
	printf("%s", str);
	return 0;
}
