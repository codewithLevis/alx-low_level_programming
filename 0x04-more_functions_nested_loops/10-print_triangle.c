#include "stdio.h"
/**
* print_triangle- tiangle function
*@size: holds the argument
* Return: non value
*/

void print_triangle(int size)
{
int base, height;
if (size > 0)
{
base = 1;
while (base <= size)
{
height= 1;
while (height <= size - base)
{
_putchar(' ');
 height++;
}
height = 1;
while (height <= base)
{
_putchar('#');
height++;
}
_putchar('\n');
base++;
}
}
else
_putchar('\n');
}
