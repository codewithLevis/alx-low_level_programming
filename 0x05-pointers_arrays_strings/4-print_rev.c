#include "main.h"

/**
* _strlen -returns the length of a string
*
* @s: pointer parameter
*
* Return: length of string
*
*/

int _strlen(char *s)
{
int strlen;

strlen = 0;
while (*s != '\0')
{
++strlen;
s++;
}

return (strlen);
}

/**
* print_rev - prints a string, in reverse
* @s:parameter
*Return: non-value
*/
void print_rev(char *s)
{
int ext = _strlen(s);
int call = ext - 1;

while (call + 1)
{
_putchar(s[call]);
--call;
}
_putchar('\n');
}
