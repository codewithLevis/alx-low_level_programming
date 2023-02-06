#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@n: passed integer
*@index: index of the bit you want to get
*Return: value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (index > 64)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
