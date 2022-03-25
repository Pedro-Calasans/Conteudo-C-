#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,b;
	char str1[10],str2[10];
	printf("Digite a primeira palavra\n");
	fgets(str1, 10,stdin);
	fflush(stdin);
	printf("Digite a  segunda\n");
	fgets(str2, 10,stdin);
	i=strlen(str1);
	b=strlen(str2);
	if(i>b){
		printf("As string1 eh maior\n");
	}
	if(b>i){
		printf("A string2 eh maior ");
		}
	if(i==b){
		printf("A string 1 eh igual  a string2");
		}
	}

