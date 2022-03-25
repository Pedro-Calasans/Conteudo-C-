#include <stdio.h>
#include "funcsJogoVelha.h"

// Função que coloca '-' em todas as posições da matriz
void iniciaJogo(char mat[][TAM]){
   int i, j;
   
   for(i = 0; i < TAM; i++)
    for(j = 0; j < TAM; j++) mat[i][j] = '-';     
}

// Função que apresenta a matriz na tela
void apresentaJogo(char mat[][TAM]){
  int i, j;
  printf("\n\n ");
       for(i = 0; i < TAM; i++) printf("  %d", i);
 
       printf("\n");
 
       for(i = 0; i < TAM; i++){
             printf("%d  ", i);
             for(j = 0; j < TAM; j++){
                   printf("%c  ", mat[i][j]);
             }
             printf("\n");
       }
  printf("\n\n");   
}

coord trataEntrada(char mat[][TAM], int njogador, char simb){
	
	coord jogada;
	int aux;
	
	
    do{ // trata entrada
         printf("Jogador %d, entre com as coordenadas da jogada (linha coluna): ", njogador);
         scanf("%d %d", &jogada.linha, &jogada.coluna);
         if((jogada.linha < 0) || (jogada.linha >= TAM) || (jogada.coluna < 0) || (jogada.coluna >= TAM))
              printf("Entre com valores entre 0 e %d.\n", TAM);
    } while((jogada.linha < 0) || (jogada.linha >= TAM) || (jogada.coluna < 0) || (jogada.coluna >= TAM));
       
    return jogada;
	
}

// Função que recebe a matriz, as coordenadas da nova jogada e registra
// Retorna 0 se o registro foi bem sucedido e 1 caso contrário (posição já ocupada)
int registraJogada(char mat[][TAM], char j, coord ent){
    
    if(mat[ent.linha][ent.coluna] == '-'){
       mat[ent.linha][ent.coluna] = j;
       return 0;
       
    } else {
    	
    	printf("Posicao ja ocupada.\n");
    	return 1;
	} 

}

// Função que checa as linhas para ver se há vencedor 
// Retorna o caracter do vencedor ('x' ou 'o') ou '-' se não houver
char checaLinhas(char mat[][TAM]){
   char aux;
   int i, j, teste;
   
   for(i = 0; i < TAM; i++){
        teste = 0;
        aux = mat[i][0];
        if(aux != '-'){
          for(j = 1; j < TAM; j++){
              if(aux == mat[i][j]) teste++;
          }
         if(teste == 2) return aux;
        }
   }
   
   return '-';     

}

// Função que checa as colunas para ver se há vencedor 
// Retorna o caracter do vencedor ('x' ou 'o') ou '-' se não houver
char checaColunas(char mat[][TAM]){
   char aux;
   int i, j, teste;
   
   for(j = 0; j < TAM; j++){
             teste = 0;
             aux = mat[0][j];
             if(aux != '-'){
               for(i = 1; i < TAM; i++){
                 if(aux == mat[i][j]) teste++;
               }
               if(teste == 2) return aux;
             }
   }
   
   return '-';     

}

// Função que checa as diagonais para ver se há vencedor 
// Retorna o caracter do vencedor ('x' ou 'o') ou '-' se não houver
char checaDiagonais(char mat[][TAM]){
   char aux;
   int i, j, teste;
   
   // Checa diagonal 1
   aux = mat[0][0];
   teste = 0;
   if(aux != '-'){
     for(i = 1; i < 3; i++){ 
        if(aux == mat[i][i]) teste++;
     }
       
     if(teste == 2) return aux;
   }
   
   // Checa diagonal 2
   aux = mat[0][2];
   teste = 0;
   if(aux != '-'){
     for(i = 1, j = 1; i < 3, j >= 0; i++, j--){
       if(aux == mat[i][j]) teste++;
     }
     if(teste == 2) return aux;
   }

   return '-';
   
}

char checaVencedor(char mat[][TAM]){
	char aux;
	
	aux = checaLinhas(mat);
	if(aux != '-') return aux;
	
	aux = checaColunas(mat);
	if(aux != '-') return aux;
	
	aux = checaDiagonais(mat);
	if(aux != '-') return aux;
	
	return '-';
}
