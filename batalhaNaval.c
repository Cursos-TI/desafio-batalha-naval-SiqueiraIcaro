#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).


    int tamanho_navio_horizontal = 3;
    int tamanho_navio_vertical = 4;
    int tabuleiro[10][10];

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    int x_hor = 1;
    int y_hor = 2;

    int x_ver = 6;
    int y_ver = 4;

    for (int i = 0; i < tamanho_navio_horizontal; i++)
    {
        tabuleiro[y_hor][x_hor + i];
    }

    for (int i = 0; i < tamanho_navio_horizontal; i++)
    {
        tabuleiro[y_ver][x_ver + i];
    }


    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanho_navio_horizontal; i++) 
    {
        printf("(%d, %d)\n", x_hor + i, y_hor);
    }

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < tamanho_navio_vertical; i++) 
    {
        printf("(%d, %d)\n", x_hor + i, y_hor);
    }

    

    return 0;
}
