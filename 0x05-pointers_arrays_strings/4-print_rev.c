#include "main.h"

void _puts(char *str)
{
	int j;

	while (str[j] != '\0')
	{
		putchar(str[j]);
		++j;
	}
	putchar('\n');
}

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string parameter
 *Return: no value
 */
void print_rev(char *s)
{
int rev = strlen(s);
int j = rev - 1;

while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
