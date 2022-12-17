#include "main.h"
/**
* print_alphabet - print lower case alphabets
*
*Return: non-value
*/
void print_alphabet(void)
{
int alphabetics;

alphabetics = 'a';
while (alphabetics <= 'z')
{
_putchar(alphabetics);
alphabetics++;
}
_putchar('\n');
}
