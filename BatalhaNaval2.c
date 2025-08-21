#include <stdio.h>

#define colunas 10
#define linhas 10

int main(){
    //matriz de tabuleiro;
    int tabuleiro[linhas][colunas];

    printf("JOGO BATALHA NAVAL:\n");
    printf("    "); // espaço para alinhas a marcacao com as colunas;
    for (int j = 0; j < colunas; j++) {//percorre as colunas;
        printf("%c\t  ", 'A' + j);//marca as colunas com letras;
    }
    printf("\n");//espaco em branco de quebra de linhas;
    for (int i = 0; i < linhas; i++){//percorre as linhas;
        printf("%d   ", i + 1);//enumera as linhas;
        for(int j = 0; j < colunas; j++){//percorre as colunas;
            //cruz;
            if(j == 2 && i > 1 && i < 5){
                tabuleiro[i][j] = 3;
            }else if(i == 3 && j >= 0 && j < 5){
                 tabuleiro[i][j] = 3;
            //cone;
            }else if(j == 2 && i > 5 && i < 9){
                tabuleiro[i][j] = 2;
            }else if(j > 0 && j < 4 && i == 7){
                tabuleiro[i][j] = 2;
            }else if(i == 8 && j >= 0 && j < 5){
                tabuleiro[i][j] = 2;
            //exaedro;
            }else if (j == 7 && i > 3 && i < 9 ){
                tabuleiro[i][j] = 7;
            }else if (i == 5 && j > 5 && j < 9){
                tabuleiro[i][j] = 7;
            }else if (i == 6 && j > 4 && j <= 9){
                tabuleiro[i][j] = 7;
            }else if (i == 7 && j > 5 && j < 9){
                tabuleiro[i][j] = 7;
                //caso na acenteca;
            }else{
                tabuleiro[i][j] = 0;
            }
            printf("%d\t  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}