#include <stdio.h>

int main(){
    int colunas = 10, linhas = 10;
    //matriz de tabuleiro;
    int tabuleiro[10][10];

    printf("JOGO BATALHA NAVAL:\n");
    printf("    "); // espaço para alinhas a marcacao com as colunas;
    for (int j = 0; j < colunas; j++) {//percorre as colunas;
        printf("%c\t  ", 'A' + j);//marca as colunas com letras;
    }
    printf("\n");//espaco em branco de quebra de linhas;
    for (int i = 0; i < linhas; i++){//percorre as linhas;
        printf("%d   ", i + 1);//enumera as linhas;
        for(int j = 0; j < colunas; j++){//percorre as colunas;
            if(i > 2 && i < 6 && j == 0){//navio vertival;
                tabuleiro[i][j] = 3;
            }else if(j > 1 && j < 5 && i == 8){//navio horizontal;
                tabuleiro[i][j] = 3;
            }else if(i == j && i > 3 && i < 8 && j >4){//diagonal principal;
                tabuleiro[i][j] = 3;
            }else{
                tabuleiro[i][j] = 0;
            }
            for(int i = 0; i < colunas/3; i++){//loop da diagonal secundaria;
                for(int j = 0; j < colunas; j++)
                    tabuleiro[i][(colunas - 1) - i] = 3;
            }
            printf("%d\t  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}