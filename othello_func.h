#define max 9


void print_board(char board[][max]);

void init_board(char board[][max]); 

void play(char board[][max], int *lin_point, char *col_point, char color);

void scan_col_line(char *col_point, int *lin_point);
