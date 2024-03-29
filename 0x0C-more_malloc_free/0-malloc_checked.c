#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
*@b: memory size
*Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);

	return (size);
}
