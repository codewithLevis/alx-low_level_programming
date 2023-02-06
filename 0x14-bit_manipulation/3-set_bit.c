#include "main.h"

/**
*set_bit - sets bit at a given index to 1
*@n: passed integer
*@index: position to alter bits
*Return: 1 if it worked, or -1 if an error occurred
*/


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = 1UL << index;

	*n |= value;

	return (1);
}
