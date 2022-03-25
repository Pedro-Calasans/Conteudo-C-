#include <stdio.h>
#include <conio.h>
#include "funcsJogoVelha.h"

int main(){
    
 char jogo[TAM][TAM];
 int linha, coluna, numJogadas = 0, aux, njogador;
 char j1, j2, vencedor;
 coord entrada;
 
 
 j1 = 'x';
 j2 = 'o';
 vencedor = '-';
 
 iniciaJogo(jogo);
 apresentaJogo(jogo);
       

 while(numJogadas < JOGADAS){ // enquanto não acabam as jogadas
 
	   njogador = 1;
	   do{
			entrada = trataEntrada(jogo, njogador, j1);
	   } while(registraJogada(jogo, j1, entrada) == 1);
	   
       numJogadas++;
       
       apresentaJogo(jogo);
       
       // checa se há vencedor
       /*vencedor = checaLinhas(jogo);
       if(vencedor != '-') break;
       
       vencedor = checaColunas(jogo);
       if(vencedor != '-') break;
       
       vencedor = checaDiagonais(jogo);
       if(vencedor != '-') break;*/
       
       vencedor = checaVencedor(jogo);
       if(vencedor != '-') break;
       
       if(numJogadas < JOGADAS){

       // adiante repete para o jogador 2
       njogador = 2;
        do{
			entrada = trataEntrada(jogo, njogador, j2);
	    } while(registraJogada(jogo, j2, entrada) == 1);
       
        numJogadas++; 
        
              
        apresentaJogo(jogo);
       
        /*vencedor = checaLinhas(jogo);
        if(vencedor != '-') break;
        
        vencedor = checaColunas(jogo);
        if(vencedor != '-') break;
        
        vencedor = checaDiagonais(jogo);
        if(vencedor != '-') break;*/
        
        vencedor = checaVencedor(jogo);
        if(vencedor != '-') break;
       
       } // fim if(numJogadas < JOGADAS)
 } // fim do while
 
 if(vencedor != '-'){
    printf("Vencedor = %c", vencedor);
 } else {
   printf("Sem vencedor!\n");
 }
 
 return 0;
    
}
