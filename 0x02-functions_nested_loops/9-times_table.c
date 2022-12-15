#include "main.h"
/**
*times_table - prints a timetable
*Return: no value
*/
void times_table(void)
{
int num1, num2, product;

num1 = 0;

while (num1 <= 9)
{
_putchar(48);
num2 = 1;
while (num2 <= 9)
{
_putchar(44);
_putchar(32);
product = num1 *num2;
if (product <= 9)
{
_putchar(32);
_putchar((product % 10) + '0');
}
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
num2++;
}
_putchar('\n');
num1++;
}
}
