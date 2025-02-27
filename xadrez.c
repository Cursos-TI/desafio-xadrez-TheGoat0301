#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

#define BISPO 5   // Constante para a movimentação do bispo
#define TORRE 5   // Constante para a movimentação da torre
#define RAINHA 8  // Constante para a movimentação da rainha

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");  // Exibe a descrição do movimento do bispo
    for (int i = 0; i < BISPO; i++) {  // Laço para repetir o movimento 5 vezes
        printf("Cima\n");  // Movimento para cima (diagonal superior)
        printf("Direita\n");  // Movimento para a direita (diagonal)
    }
    
    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimento da Torre:\n");  // Exibe a descrição do movimento da torre
    for (int i = 0; i < TORRE; i++) {  // Laço para repetir o movimento 5 vezes
        printf("Direita\n");  // Movimento para a direita
    }
    
    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");  // Exibe a descrição do movimento da rainha
    for (int i = 0; i < RAINHA; i++) {  // Laço para repetir o movimento 8 vezes
        printf("Esquerda\n");  // Movimento para a esquerda
    }
    
    return 0;  // Fim do programa
}
