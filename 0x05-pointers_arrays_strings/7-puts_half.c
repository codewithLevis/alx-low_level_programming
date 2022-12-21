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
* puts_half - prints half of a string
*
* @str: parameter
*
* Return: non-value
*/

void puts_half(char *str)
{
int x;
int ext = _strlen(str);

if (ext % 2 == 0)
{
x = ext / 2;

for (; str[x] != '\0'; x++)
putchar(str[x]);

}
else if (ext % 2 != 0)
{
x = (ext / 2) + 1;

for (; str[x] != '\0'; x++)
putchar(str[x]);

}
putchar('\n');
}
