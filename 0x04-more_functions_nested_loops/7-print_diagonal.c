#include "main.h"
/**
* print_line - prints diagonal
*@n: holds the argument
* Return: line
*/

void print_line(int n)
{
int i, j;
i = 0;
for (; i < n; i++)
{
j = 0;
for (; j < n; j++)
{
if (i == j)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
