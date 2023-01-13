#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
*@b: memory size
*Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *size;
	size = (int)malloc(b);
	if (size == NULL)
		exit(98);
	
	return (size);
}
	
