#include <stdio.h>

int main(){
    int colunas = 10, linhas = 10;
    //matriz de tabuleiro;
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,3,3,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,3,0,0,0,0,0,0,3,0},
        {0,3,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
    };
    printf("JOGO BATALHA NAVAL:\n");
     printf("    "); // espaço para alinhas a marcacao com as colunas;
    for (int j = 0; j < colunas; j++) {//percorre as colunas;
        printf("%c\t ", 'A' + j);//marca as colunas com letras;
    }
    printf("\n");//espaco em branco de quebra de linhas;
    for (int i = 1; i <= linhas; i++){//percorre as linhas;
        printf("%d   ", i);//enumera as linhas;
        for(int j = 0; j < 10; j++){//percorre as colunas;
        printf("%d\t ", tabuleiro[i][j]);//imprimi as linhas e colunas da matriz;
        }
        printf("\n");
    }
    return 0;
}