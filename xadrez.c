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

    // MOVIMENTO DO CAVALO (2 casas para baixo e 1 para esquerda) usando LOOPS ANINHADOS
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    // Primeira parte do L: movimento vertical (2 casas para baixo)
    for(int movimento_vertical = 1; movimento_vertical <= 2; movimento_vertical++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: movimento horizontal (1 casa para esquerda)
    int movimento_horizontal = 1;
    while(movimento_horizontal <= 1) {
        printf("Esquerda\n");
        movimento_horizontal++;
    }

    return 0;
}