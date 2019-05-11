#include <stdio.h>

void init_board(char board[][9]);
void output_board(char board[][9]);

int main()
{
char board[9][9];
init_board(board);
output_board(board);

return 0;
}

void init_board(char board[][9])
{
for (int i = 0; i < 9; i++) {
for (int j = 0; j < 9; j++) {
board[i][j] = ' ';
}
}

board[0][1] = 'r';
board[0][2] = 'n';
board[0][3] = 'b';
board[0][4] = 'q';
board[0][5] = 'k';
board[0][6] = 'b';
board[0][7] = 'n';
board[0][8] = 'r';

board[0][0] = '8';
board[1][0] = '7';
board[2][0] = '6';
board[3][0] = '5';
board[4][0] = '4';
board[5][0] = '3';
board[6][0] = '2';
board[7][0] = '1';

board[1][1] = 'p';
board[1][2] = 'p';
board[1][3] = 'p';
board[1][4] = 'p';
board[1][5] = 'p';
board[1][6] = 'p';
board[1][7] = 'p';
board[1][8] = 'p';

board[6][1] = 'P';
board[6][2] = 'P';
board[6][3] = 'P';
board[6][4] = 'P';
board[6][5] = 'P';
board[6][6] = 'P';
board[6][7] = 'P';
board[6][8] = 'P';

board[7][1] = 'R';
board[7][2] = 'N';
board[7][3] = 'B';
board[7][4] = 'Q';
board[7][5] = 'K';
board[7][6] = 'B';
board[7][7] = 'N';
board[7][8] = 'R';

board[8][1] = 'a';
board[8][2] = 'b';
board[8][3] = 'c';
board[8][4] = 'd';
board[8][5] = 'e';
board[8][6] = 'f';
board[8][7] = 'g';
board[8][8] = 'h';
}

void output_board(char board[][9])
{
for (size_t i = 0; i < 9; i++) {
for (size_t j = 0; j < 9; j++) {
printf("%c ", board[i][j]);
}
printf("\n");
}
}