#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i;
	char str1[10],str2[10];
	printf("Digite a primeira palavra\n");
	fgets(str1, 10,stdin);
	fflush(stdin);
	printf("Digite a  segunda\n");
	fgets(str2, 10,stdin);
	if(strcmp(str1,str2)==0){
		printf("As strings sao iguais\n");
	}
	if(strcmp(str1,str2)==1){
		printf("A string1 eh maior q a 2");
		}
	if(strcmp(str1,str2)==-1){
		printf("A string 1 eh menor q a 2");
		}
	}

