#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14
*
* Return: non-value.
*/
void more_numbers(void)
{
int recall;
int number;

for (recall = 0; recall < 10; recall++)
{
number = 0;
while (number < 15)
{
if (number >= 10)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
number++;
}
_putchar(10);
}
}
