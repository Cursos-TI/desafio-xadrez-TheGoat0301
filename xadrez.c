#include <stdio.h>

#define BISPO 5   // Casas que o bispo se move na diagonal
#define TORRE 5   // Casas que a torre se move na horizontal ou vertical
#define RAINHA 8  // Casas que a rainha se move na horizontal
#define CAVALO_MOV 1 // Movimento "L" do cavalo

// Função recursiva para movimentar a Torre (apenas para a direita)
void moverTorre(int num) {
    if (num > 0) {
        printf("Direita\n");
        moverTorre(num - 1); // Chamada recursiva diminuindo o número de casas restantes
    }
}

// Função recursiva para movimentar a Rainha (apenas para a esquerda)
void moverRainha(int num) {
    if (num > 0) {
        printf("Esquerda\n");
        moverRainha(num - 1); // Chamada recursiva diminuindo o número de casas restantes
    }
}

// Função recursiva para movimentar o Bispo (diagonal superior direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0 && horizontal > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(vertical - 1, horizontal - 1); // Continua o movimento diagonal
    }
}

// Função que movimenta o cavalo em "L" (duas casas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) { // Move duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n"); // Move uma casa para a direita
    }
}

int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(BISPO, BISPO);
    
    printf("\nMovimento da Torre:\n");
    moverTorre(TORRE);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(RAINHA);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(CAVALO_MOV);
    
    return 0;
}
