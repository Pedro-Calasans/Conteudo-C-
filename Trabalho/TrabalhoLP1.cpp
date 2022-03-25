#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario;
	int menu,iniciar,idade,nivel;
	char sexo;
	salario=0;
	idade=0;
	sexo=0;
	printf("Iniciar = 0  \nFinalizar = 1\n");             //INICIO DO PROGRAMA
	scanf("%d",&iniciar);
	system("cls");                          
	while((iniciar<0) || (iniciar>1)){            
		printf("Iniciar = 0  \nFinalizar = 1\n");		//LAÇO PARA VERIFICAR SE O USARIO ENTROU COM OS VALORES CERTOS ( 0 OU 1)
		scanf("%d",&iniciar);
		system("cls");		
	}
	while(iniciar==0){           //MENU  
		printf("  MENU  \n");
		printf("0-Idade\n1-Sexo\n2-Pretensao Salario\n3-Escolaridade\n4-Buscar vagas\n5-Vagas disponiveis\n6-Voltar ao menu anterior\n");
		scanf("%d",&menu);
		system("cls");
	while((menu<0)|| (menu>6)){   //lAÇO PARA VERIFICAR SE O USARIO ENTROU COM O VALOR CERTO   ( 0 ATÉ 6)
		printf("  MENU  \n");
		printf("0-Idade\n1-Sexo\n2-Pretensao Salario\n3-Escolaridade\n4-Buscar vagas\n5-Vagas disponiveis\n6-Voltar ao menu anterior\n");
		scanf("%d",&menu);
		system("cls");            
		}
	switch(menu){     //MENU 2 USANDO SWITCH CASE PARA CADA UMA DAS OPÇÕES
		case 0:
			printf("Idade:  \n");      //MENU 0 ENTRAR COM A IDADE 
			scanf("%d",&idade);
			system("cls");
			while(idade<16){          //LAÇO PARA VERIFICAR SE A IDADE É VALIDA (IDADE>=16)
				printf("Idade invalidade digite novamente\nIdade:  \n");
				scanf("%d",&idade);
				system("cls");				
			}
			break;
		case 1:
			printf("(sexo f ou m)\nSexo: \n");   //MENU 1 ENTRAR COM SEXO 
			scanf(" %c",&sexo);
			system("cls");
			while((sexo!='f') && (sexo!='m')){   // LAÇO PARA VERIFCAR SE O SEXO É VALIDO (F= MULHER M= HOMEN)
				printf("Sexo invalido digite novamente\n(sexo f ou m)\nSexo: \n");
				scanf(" %c",&sexo);
				system("cls");
			}
			break;
		case 2:
			printf("Prentesao salario:  \n");  //MENU 2 ENTRAR COM PRETENSÃO SALARIAL
			scanf("%f",&salario);
			system("cls");
			while(salario<=0){
				printf("Valor invalido\nPretensao salario:\n");
				scanf("%f",&salario);
				system("cls");
			}
			break;
		case 3:
			printf("Nivel de Escoladirade:\n0=Fundamental Completo\n1=Ensino Medio completo\n2=Superior Completo");
			scanf("%d",&nivel);
			system("cls");
			while((nivel>3) && (nivel<0)){
				printf("Valor invalido");
				printf("Nivel de Escoladirade:\n0=Fundamental Completo\n1=Ensino Medio completo\n2=Superior Completo");
				scanf("%d",&nivel);
			}
	
			break;
		case 4:
			if((salario==0) && (sexo==0) && (idade==0) && (nivel!=0 || (nivel!=1) || (nivel!=2))){
				printf("Complete a insercao de dados!!!\n");
			}else{
				if((nivel==1)&& (sexo=='f') && (idade>=18) && (salario<=1500)){
				printf("VAGA DISPONIVEL:Recepcionista\n");
				printf("Deseja aceitar a vaga??\n");
				}else{
					if((nivel==0)&& (sexo=='m') && ((idade>=16) && (idade<=20)) && (salario<=900)){
					printf("VAGA DISPONIVEL:Ajudante geral\n");
					printf("Deseja aceitar a vaga??\n");
				}
				}
			}
			break;
		case 5:
			break;	
			}	
	}
}

