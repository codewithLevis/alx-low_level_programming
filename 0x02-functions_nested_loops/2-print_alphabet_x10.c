#include "main.h"

/**
*print_alphabet_x10 - outputs alphabetics * 10
*
*Return: non-value
*/
void print_alphabet_x10(void)
{
int call, alphabetics;

call = '0';
while (call <= '9')
{
alphabetics = 'a';
while (alphabetics <= 'z')
{
_putchar(alphabetics);
alphabetics++;
}
_putchar('\n');
call++;
}
}
