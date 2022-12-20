#include "main.h"

/**
 * _atoi - string converterto an integer
 *
 * @s: takes for string passed
 *
 * Return: string
 */
int _atoi(char *s)
{
    unsigned int digit = 0;
	int opera = 1;
	int mult = digit * opera;

	do {
		if (*s == '-')
			opera = opera * -1;

		else if (*s >= '0' && *s <= '9')
			digit = (*s - '0') + (digit * 10);

		else if (digit > 0)
			break;

	} while (*s++);
	return (mult);
}
