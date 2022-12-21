#include "main.h"
/**
* _puts - Prints a string
*
* @str: parameter
*Return: non-value
*/
void _puts(char *str)
{
int call;

while (str[call] != '\0')
{
_putchar(str[call]);
call++;
}
_putchar('\n');
}
