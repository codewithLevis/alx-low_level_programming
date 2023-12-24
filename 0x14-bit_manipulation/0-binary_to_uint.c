#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: is pointing to a string of 0 and 1 chars
*Return: the converted number, or 0 if
*there is one or more chars in the string b that is not 0 or 1
*b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int base = 1;
	int len, i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	while (len)
	{
		num += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}
	return (num);
}
