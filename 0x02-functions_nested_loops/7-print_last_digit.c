#include "main.h"

/**
*print_last_digit - function for printing last digits
*
*@last: parameter for last number
*
*Return: last
*/
int print_last_digit(int last)
{
last = last % 10;

if (last < 0)
{
last = -last;
_putchar(last + '0');
}
else
{
_putchar(last + '0');
}
return (last);
}
