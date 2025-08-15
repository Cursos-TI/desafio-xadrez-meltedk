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
		for(int i = 0; i < 1; i++) {
			printf("Cima, ");
			for(int j = 0; j < 1; j++) {
				printf("Direita\n");
				moverBispo(casas - 1);
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
	const int torreExcessao = 5, bispoExcessao = 5, rainhaExcessao = 8;
	const int excessaoMin = 1;

	printf("\t*** Movimentos de Xadrez ***\n\n");

	//Movimento da torre
	printf("\nMovimento da torre: \n");
	printf("Digite quantas casas você quer mover a torre para direita: ");
	scanf("%d", &numCasasTorre);
	if(numCasasTorre > 0 && numCasasTorre <= 5) {
		moverTorre(numCasasTorre);
	} else if(numCasasTorre > 5) {
		printf("Número de casas inválido! (Máximo de 5 casas)\n");
		moverTorre(torreExcessao);
	} else {
		printf("Número de casas inválido! (Mínimo de 1 casa)\n");
		moverTorre(excessaoMin);
	}

	//Movimento do bispo
	printf("\nMovimento do bispo: \n");
	printf("Digite quantas casas você quer mover o bispo para diagonal superior direita: ");
	scanf("%d", &numCasasBispo);
	if(numCasasBispo > 0 && numCasasBispo <= 5) {
		moverBispo(numCasasBispo);
	} else if(numCasasBispo > 5) {
		printf("Número de casas inválido! (Máximo de 5 casas)\n");
		moverBispo(bispoExcessao);
	} else {
		printf("Número de casas inválido! (Mínimo de 1 casa)\n");
		moverBispo(excessaoMin);
	}

	//Movimento da rainha
	printf("\nMovimento da rainha: \n");
	printf("Digite quantas casas você quer mover a rainha para esquerda: ");
	scanf("%d", &numCasasRainha);
	if(numCasasRainha > 0 && numCasasRainha <= 8) {
		moverRainha(numCasasRainha);
	} else if(numCasasRainha > 8) {
		printf("Número de casas inválido! (Máximo de 8 casa)\n");
		moverRainha(rainhaExcessao);
	} else {
		printf("Número de casas inválido! (Mínimo de 1 casa)\n");
		moverRainha(excessaoMin);
	}

	//Movimento do cavalo
	printf("\nMovimento do cavalo: \n");
	while(movimentoCompleto--) {
		for(int i = 0, j = 5; i < j && j > i; i++, j--) {
			printf("Cima\n"); // Imprime "Cima" duas vezes
			if(i == 0) {
				continue;
			} else {
				printf("Direita\n\n"); // Imprime "Direita" uma vez
				break;
			}
		}
	}

	return 0;
}