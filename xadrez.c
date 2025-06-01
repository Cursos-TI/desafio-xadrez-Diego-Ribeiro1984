#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando FOR
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa
    }

    // Movimento do Bispo (5 casas na diagonal superior direita) usando WHILE
    printf("\nMovimento do Bispo (5 casas na diagonal cima/direita):\n");
    int casa_bispo = 1;
    while(casa_bispo <= 5) {
        printf("Cima, Direita\n"); // Combinação de direções
        casa_bispo++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casa_rainha = 1;
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while(casa_rainha <= 8);

    return 0;
}