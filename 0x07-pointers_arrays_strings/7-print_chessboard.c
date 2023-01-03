#include "main.h"
/**
*print_chessboard -  prints the chessboard
*
*@a: pointer to an array character
*Return: non-value
*/
void print_chessboard(char (*a)[8])
{
int x, y;

x = 0;

do {
y = 0;
do {
putchar(a[x][y]);
y++;
} while (y < 8);
putchar('\n');
x++;

} while (x < 8);
}
