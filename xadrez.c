#include <stdio.h>

// Função recursiva para movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento do Bispo (diagonal cima/direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Versão com loops aninhados para o Bispo
void moverBispoLoops(int casas) {
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para movimento complexo do Cavalo (L: 2 cima, 1 direita)
void moverCavalo() {
    int cima_feito = 0;
    int direita_feito = 0;
    
    // Loop complexo com múltiplas variáveis e controle de fluxo
    for (int passo = 1; passo <= 3; passo++) {
        while (1) { // Loop infinito controlado por break
            if (passo <= 2 && cima_feito < 2) {
                printf("Cima\n");
                cima_feito++;
                break;
            } else if (passo == 3 && direita_feito < 1) {
                printf("Direita\n");
                direita_feito++;
                break;
            }
            break; // Sai do while após cada movimento
        }
    }
}

int main() {
    // Torre (recursivo) - 5 casas direita
    printf("\nMovimento da Torre (5 casas para a direita - recursivo):\n");
    moverTorre(5);

    // Bispo (recursivo) - 5 casas diagonal
    printf("\nMovimento do Bispo (5 casas na diagonal - recursivo):\n");
    moverBispo(5);

    // Bispo (loops aninhados) - versão alternativa
    printf("\nMovimento do Bispo (5 casas na diagonal - loops aninhados):\n");
    moverBispoLoops(5);

    // Rainha (recursivo) - 8 casas esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda - recursivo):\n");
    moverRainha(8);

    // Cavalo (loops complexos) - L: 2 cima, 1 direita
    printf("\nMovimento do Cavalo (2 cima e 1 direita - loops complexos):\n");
    moverCavalo();

    return 0;
}