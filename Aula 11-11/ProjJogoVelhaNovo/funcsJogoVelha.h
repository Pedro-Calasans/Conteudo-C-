#define TAM 3
#define JOGADAS 9

typedef struct{
	int linha;
	int coluna;
} coord;

void iniciaJogo(char mat[][TAM]);
void apresentaJogo(char mat[][TAM]);
coord trataEntrada(char mat[][TAM], int n, char c);
char checaColunas(char mat[][TAM]);
char checaLinhas(char mat[][TAM]);
char checaDiagonais(char mat[][TAM]);
char checaVencedor(char mat[][TAM]);
int registraJogada(char mat[][TAM], char j, coord ent); 
