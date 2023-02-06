#include "main.h"

/**
*clear_bit - sets bit at aposition to 0
*@n: passed integer
*@index: position to alter the bit
*Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = 1UL << index;

	*n &= ~value;

	return (1);
}
