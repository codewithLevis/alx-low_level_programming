#include "main.h"

/**
*get_endianness - checks the endianness
*Return: void
*/

int get_endianness(void)
{
	int num = 1;
	return (*((char *) &num));
}
