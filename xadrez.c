#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
	int torre, bispo, rainha;
	int menu;
	int i;

	printf("\t*** Movimentos de Xadrez ***\n\n");

	//Menu do usuário
	do {
		printf("Selecione a peça que deseja movimentar: \n");
		printf("1. Torre.\n");
		printf("2. Bispo.\n");
		printf("3. Rainha.\n");
		printf("4. Encerrar programa.\n");
		scanf("%d", &menu);

		switch(menu) {
			case 1:
				//Movimento da torre
				printf("Digite quantas casas a torre irá percorrer: ");
				scanf("%d", &torre);
				printf("Movimento da torre: \n");
				for(int i = 1; i <= torre; i++){
					printf("Direita\n"); // Imprime a direção do movimento
				}
			break;
			case 2:
				//Movimento do bispo
				printf("Digite quantas casas o bispo irá percorrer: ");
				scanf("%d", &bispo);
				i = 1;
				printf("Movimento do bispo: \n");
				while(i <= bispo) {
					printf("Cima, Direita\n");
				i++;
				}
			break;
			case 3:
				//Movimento da rainha
				printf("Digite quantas casas a rainha irá percorrer: ");
				scanf("%d", &rainha);
				i = 1;
				printf("Movimento da rainha: \n");
				do {
					printf("Esquerda\n");
					i++;
				} while(i <= rainha);
			break;
			case 4:
				printf("Encerrando o programa...\n");
			break;
			default:
				printf("Opção inválida!\n");
		}
	} while(menu != 4);

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
