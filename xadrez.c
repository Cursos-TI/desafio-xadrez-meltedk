#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
	
	int i;
	int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'

	printf("\t*** Movimentos de Xadrez ***\n\n");

	//Movimento da torre
	printf("Movimento da torre: \n");
	for(int i = 1; i <= 5; i++){
	printf("Direita\n"); // Imprime a direção do movimento
	}

	//Movimento do bispo
	i = 1;
	printf("Movimento do bispo: \n");
	while(i <= 5) {
		printf("Cima, Direita\n");
	i++;
	}

	//Movimento da rainha
	i = 1;
	printf("Movimento da rainha: \n");
	do {
		printf("Esquerda\n");
		i++;
	} while(i <= 8);

	//Movimento do cavalo
	printf("\nMovimento do cavalo: \n");
	while(movimentoCompleto--) {

		for(int i = 0; i < 2; i++) {
			printf("Cima, "); // Imprime "Cima" duas vezes
		}
		printf("Direita\n\n"); // Imprime "Direita" duas vezes
	}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
