#include <stdio.h>

/*
 * Simulação de movimentos das peças de xadrez
 * Torre, Bispo, Rainha e Cavalo
 * Níveis: Novato, Aventureiro e Mestre
 *
 * Autor: Gabriel
 * Data: 2025
 */

// ----------- Nível Novato -----------

// Torre se move 5 casas para a direita usando for
void torre_movimento_for(int casas) {
    printf("Movimento da Torre (for):\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Bispo se move 5 casas na diagonal (cima e direita) usando while
void bispo_movimento_while(int casas) {
    printf("Movimento do Bispo (while):\n");
    int i = 0;
    while (i < casas) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");
}

// Rainha se move 8 casas para a esquerda usando do-while
void rainha_movimento_do_while(int casas) {
    printf("Movimento da Rainha (do-while):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
    printf("\n");
}

// ----------- Nível Aventureiro -----------

// Cavalo se move em "L": 2 casas para baixo + 1 casa para esquerda usando loops aninhados (for + while)
void cavalo_movimento_aninhado() {
    const int casas_baixo = 2;
    const int casas_esquerda = 1;

    printf("Movimento do Cavalo (loops aninhados):\n");

    // Mover 2 casas para baixo com for
    for (int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }

    // Mover 1 casa para esquerda com while
    int j = 0;
    while (j < casas_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");
}

// ----------- Nível Mestre -----------

// Recursividade para movimentação da Torre (5 casas para a direita)
void torre_recursiva(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("Direita\n");
    torre_recursiva(casas_restantes - 1);
}

// Recursividade + loops aninhados para movimentação do Bispo (5 casas na diagonal cima-direita)
// Aqui vertical é o loop externo, horizontal é o interno (simulado com recursão)
void bispo_recursivo(int vertical, int max) {
    if (vertical >= max) return;
    // Loop interno simulado com recursão para horizontal = 1 passo (porque diagonal)
    printf("Cima, Direita\n");
    bispo_recursivo(vertical + 1, max);
}

// Recursividade para movimentação da Rainha (8 casas para a esquerda)
void rainha_recursiva(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("Esquerda\n");
    rainha_recursiva(casas_restantes - 1);
}

// Movimento complexo do Cavalo: 2 casas para cima e 1 para a direita usando loops aninhados, com continue e break
void cavalo_loops_complexos() {
    const int casas_cima = 2;
    const int casas_direita = 1;

    printf("Movimento do Cavalo Mestre (loops complexos):\n");

    int i = 0, j = 0;

    // Loop for para casas para cima
    for (i = 0; i < casas_cima; i++) {
        // Exemplo de controle com continue: (aqui não pulamos, mas poderia)
        if (i == 100) continue; // nunca será true, só para exemplo
        printf("Cima\n");
    }

    // Loop while para casas para direita com break
    while (1) {
        if (j >= casas_direita) break;
        printf("Direita\n");
        j++;
    }

    printf("\n");
}

int main() {
    // --- Nível Novato ---
    torre_movimento_for(5);
    bispo_movimento_while(5);
    rainha_movimento_do_while(8);

    // --- Nível Aventureiro ---
    cavalo_movimento_aninhado();

    // --- Nível Mestre ---
    printf("Movimento da Torre Recursiva:\n");
    torre_recursiva(5);
    printf("\n");

    printf("Movimento do Bispo Recursivo:\n");
    bispo_recursivo(0, 5);
    printf("\n");

    printf("Movimento da Rainha Recursiva:\n");
    rainha_recursiva(8);
    printf("\n");

    cavalo_loops_complexos();

    return 0;
}
