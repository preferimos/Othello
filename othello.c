#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>

#include "othello_func.h"
#include "othello_func.c"

#define max 9

int main()
{

    char board[max][max];
    char col = 'O', X, *col_point;
    int lin = 0, *lin_point, cont = 0;
    lin_point = &lin;
    col_point = &col;

    init_board(board);
    scan_col_line(&col, &lin);
    //  printf("linha =%d e coluna =%c \n", *lin_point, *col_point);
    play(board, &lin, &col, X);
    char car[2];

    trocar_pecas(board, &lin, &col, X)

    print_board(board);

    printf("\n Game Over!\n");

    return 0;
}

// printf("IIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
// printf("|                          |\n");
// printf("|        OTHELLO GAME      |\n");
// printf("|                          |\n");
// printf("|      A B C D E F G H     |\n");
// printf("|    1 . . . . . . . .     |\n");
// printf("|    2 . . . . . . . .     |\n");
// printf("|    3 . . . . . . . .     |\n");
// printf("|    4 . . . O X . . .     |\n");
// printf("|    5 . . . X O . . .     |\n");
// printf("|    6 . . . . . . . .     |\n");
// printf("|    7 . . . . . . . .     |\n");
// printf("|    8 . . . . . . . .     |\n");
// printf("|                          |\n");
// printf("IIIIIIIIIIIIIIIIIIIIIIIIIIII\n");