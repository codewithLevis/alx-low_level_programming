#include "stdio.h"

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
putchar('0');
num2 = 1;
while (num2 <= n)
{
putchar(',');
putchar(' ');
product = num1 *num2;
if (product < 100)
{
putchar(' ');
}
if (product <= 9)
{
putchar(' ');
}
if (product >= 100)
{
putchar((product / 100) + '0');
putchar((product / 10) % 10 + '0');
}
else if (product <= 99 && product >= 10)
{
putchar((product / 10) + '0');
}
putchar((product % 10) + '0');
num2++;
}
putchar('\n');
num1++;
}
}
}
