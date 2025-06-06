#include <stdio.h>

// definida linhas e as colunas, para não serem alterados os valores.
#define linhas 10 
#define colunas 10
#define navio 3;

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    
    // matriz do tabuleiro
    int tabuleiro[linhas][colunas] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
    };


    /* Alocando o primeiro navio na linha 6 coluna 4, com a adicioção do 5 + i, vai adicionar a cada repetição
    +1, na primeira é 5 + 0, resultando em 5, na segunda é 5+1 resulta em 6, ou seja, o valor do [5][3] será 3
    e assim vai sendo alocado para os [6][3] e [7][3] também. */
    for(int i = 0; i < 3; i++)
    {
        if (tabuleiro[5 + i][3] == 3)
        {
            printf("#ERRO, HÁ UM NAVIO NESTA COORDENADA#\n");
            break;
        } else 
        {
            tabuleiro[5 + i][3] = navio;
        }
    }


    /* Esse código é similar ao do primeiro navio, porém em vez de inclir i++ na linha, será incluso na coluna
    [5][6], [5][7], [5][8]. Nesses lugares do tabuleiro será definido de 0 para 3, representando os navios. */
    for(int i = 0; i < 3; i++)
    {
        if (tabuleiro[5][6 + i] == 3)
        {
            printf("#ERRO, HÁ UM NAVIO NESTA COORDENADA#\n");
            break;
        } else 
        {
            tabuleiro[5][6 + i] = navio;
        }
    }


    /* Código para adicionar o terceiro navio ao tabuleiro, esse navio está na diagonal*/
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][i] == 3)
        {
            printf("#ERRO, HÁ UM NAVIO NESTA COORDENADA#\n");
            break;
        } else
        {
            tabuleiro[i][i] = navio;
        }
    }
    

    /* Código para adicionar o quarto navio que também está na posicionado na diagonal, porém na diagonal oposta*/
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[9 - i][8 - i] == 3)
        {
            printf("#ERRO, HÁ UM NAVIO NESTA COORDENADA#\n");
            break;
        } else 
        {
        tabuleiro[9 - i][8 - i] = navio;
        }
    }
    

    // looping para representar o tabuleiro
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
