#include <stdio.h>

//funções
void moverTorre(int casas) {
	if(casas > 0) {
		printf("Direita\n"); // Imprime a direção do movimento
		moverTorre(casas - 1);
	}
}

void moverBispo(int casas) {
	if(casas > 0) {
		for(int i = 1; i <= casas; i++) {
			printf("Cima, ");
			for(int j = 1; j == 1; j++){
				printf("Direita\n");
			}
		}
	}
}

void moverRainha(int casas) {
	if(casas > 0) {
		printf("Esquerda\n");
		moverRainha(casas - 1);
	}
}

//main
int main() {

	int numCasasTorre, numCasasBispo, numCasasRainha;
	int i;
	int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'

	printf("\t*** Movimentos de Xadrez ***\n\n");

	//Movimento da torre
	printf("\nMovimento da torre: \n");
	printf("Digite quantas casas você quer mover a torre para direita: ");
	scanf("%d", &numCasasTorre);
	moverTorre(numCasasTorre);

	//Movimento do bispo
	printf("\nMovimento do bispo: \n");
	printf("Digite quantas casas você quer mover o bispo para diagonal superior direita: ");
	scanf("%d", &numCasasBispo);
	moverBispo(5);

	//Movimento da rainha
	printf("\nMovimento da rainha: \n");
	printf("Digite quantas casas você quer mover a rainha para esquerda: ");
	scanf("%d", &numCasasBispo);
	moverRainha(8);

	//Movimento do cavalo
	printf("\nMovimento do cavalo: \n");
	while(movimentoCompleto--) {
		for(int i = 0, j = 5; i < j && j > i; i++, j--) {
			printf("Cima, "); // Imprime "Cima" duas vezes
			if(i == 0) {
				continue;
			} else {
				printf("Direita\n\n"); // Imprime "Direita" duas vezes
				break;
			}
		}
	}

	return 0;
}