#include "main.h"

/**
*flip_bits - function that lips bits
*@n: integer one
*@m: integer two
*Return: the number of bits you would need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int i = 0;

	while (xor > 0)
	{
		i += (xor & 1);
		xor >>= 1;
	}

	return (i);
}
