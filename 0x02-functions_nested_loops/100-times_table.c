#include "main.h"

/**
 * print_times_table - outputs time table
 *
 *@n: provides limit
 *
 * Return: 0
 */
void print_times_table(int n)
{
int num1, num2, product;

if (n <= 15 && n >= 0)
{
num1 = 0;
while (num1 <= n)
{
_putchar('0');
num2 = 1;
while (num2 <= n)
{
_putchar(',');
_putchar(' ');
_product = num1 *num2;
if (product < 100)
{
_putchar(' ');
}
if (product <= 9)
{
_putchar(' ');
}
if (product >= 100)
{
_putchar((product / 100) + '0');
_putchar((product / 10) % 10 + '0');
}
else if (product <= 99 && product >= 10)
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
num2++;
}
_putchar('\n');
num1++;
}
}
}
