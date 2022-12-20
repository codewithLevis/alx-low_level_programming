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
