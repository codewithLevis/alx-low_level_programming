#include "main.h"

/**
*print_sign - outputs sign depending on value form 0
*
*Description: 'use if statements'
*
*@n: parameter for number
*
*Return: 1 or 0 or -1
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
