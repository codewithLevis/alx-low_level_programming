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
 * rev_string -  reverses a string
 *
 * @s: parameter
 *Return: non-value
 */
void rev_string(char *s)
{
char y;
int x;
int ext = _strlen(s);

for (; x < ext / 2; x++)
{
y = s[x];
s[x] = s[ext - x - 1];
s[ext - x - 1] = y;
}
}
