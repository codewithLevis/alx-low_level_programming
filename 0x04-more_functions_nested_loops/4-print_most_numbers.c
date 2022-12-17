#include "main.h"
/**
 * print_most_numbers -outputs most digits
 * Return: most digits
 */
void print_most_numbers(void)
{
int num = '0';

for (; num <= '9'; num++)
{
if  (num != '2' &&  num != '4')
{
_putchar(num);
}
}
_putchar('\n');
}
