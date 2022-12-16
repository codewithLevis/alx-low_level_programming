#include "main.h"
/**
 * _isupper - checks for upper case
 * @c: parameter
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
