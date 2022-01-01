#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>

#include "othello_func.h"

#define max 9

void print_board(char board[][max]) // funcao que da um print do quadro atual
{

    int cont = 0;
    printf("\nIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
    printf("|                          |\n");
    printf("|        OTHELLO GAME      |\n");
    printf("|                          |\n");
    printf("|      A B C D E F G H     |\n");
    for (int i = 1; i < max; i++) // incrementa as linhas
    {
        cont++;
        for (int j = 1; j < max; j++) // incrementa as colunas
        {
            if (j == 8)
            {
                printf(" %c     |\n", board[i][j]);
            }
            else if (j == 1)
            {
                printf("|    %d %c", cont, board[i][j]);
            }
            else
            {
                printf(" %c", board[i][j]);
            }
        }
    }
    printf("|                          |\n");
    printf("IIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
}

void init_board(char board[][max]) // funcao que vai iniciar o quadro com as posiçoes inicias armazenadas numa matriz
{
    int i, j;
    char reset = '.';
    char X = 'X', O = 'O';
    for (j = 1; j < max; j++) // incrementa as linhas
    {
        for (i = 1; i < max; i++) // incrementa as colunas
        {
            board[i][j] = reset;
        }
        i = 1;
        board[i][j] = reset;
    }
    board[4][4] = O; // iniciar as 4 posiçoes to tabuleiro
    board[4][5] = X;
    board[5][4] = X;
    board[5][5] = O;
}

void play(char board[][max], int *lin_point, char *col_point, char color) // REGISTA A JOGADA INSERIDA PELO UTILIZADOR NA MATRIZ

{
    //printf("linha no play %d\n", *lin_point);
    //printf("coluna no play %c\n", *col_point);

    switch (*col_point)
    {
    case 'A':

        board[*lin_point][1] = 'X';
        break;
    case 'B':
        board[*lin_point][2] = 'X';
        break;
    case 'C':
        board[*lin_point][3] = 'X';
        break;
    case 'D':
        board[*lin_point][4] = 'X';
        break;
    case 'E':
        board[*lin_point][5] = 'X';
        break;
    case 'F':
        board[*lin_point][6] = 'X';
        break;
    case 'G':
        board[*lin_point][7] = 'X';
        break;
    case 'H':
        board[*lin_point][8] = 'X';

    default:
        break;
    }
}

void scan_col_line(char *col_point, int *lin_point) // LE A JOGADA INSERIDA PELO UTILIZADOR
{
    char coluna;
    int linha = 0;
    while ((linha != 1) && (linha != 2) && (linha != 3) && (linha != 4) && (linha != 5) && (linha != 6) && (linha != 7) && (linha != 8))
    {
        printf("E a sua vez! Insira a proxima jogada (primeiro a letra e depois numero da linha): \n");
        scanf("%c", col_point);
        scanf("%d", lin_point);

        linha = *lin_point;
        coluna = *col_point;
        *col_point = coluna;
    }
}
