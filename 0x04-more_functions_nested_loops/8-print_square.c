#include "main.h"
/**
* print_square - prints a square with # symbol
* @size: parameter for input
* Return: no value
*/
void print_square(int size)
{
if (size > 0)
{
int j = 0;

for (; j < size; j++)
{
int i = 0;
for (; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else if (size <= 0)
{
_putchar('\n');
}
}
