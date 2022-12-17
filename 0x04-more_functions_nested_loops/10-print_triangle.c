#include "stdio.h"
/**
* print_diagonal - prints diagonal
*@n: holds the argument
* Return: line
*/

void print_diagonal(int n)
{
int i, j;
i = 0;
if (n > 0)
{
for (; i < n; i++)
{
j = 0;
for (; j < n; j++)
{
if (i == j)
{
_putchar(' ');
}
else if (i > j)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
_putchar('\n');
}
