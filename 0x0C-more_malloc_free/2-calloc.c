#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of individual element
*Return: NULL or pointer to the memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	if (nmemb == 0 || size == 0)
		return NULL;
	
	str = malloc(nmemb * size);
	if (!str) return NULL;
	_memset(str, 0, nmemb * size);
	
	return (str);
}

/**
*_memset - fills memory with a constant byte
*
*@s: pointer to memory location to be filled with bytes
*@b: pointer tothe bytes to be filled to a memory location
*@n: number of bytes to be filled
*
*Return: s(Filled memory location)
*/
char *_memset(char *s, char b, unsigned int n)
{
char *byte = s;
n = n - 1;
do {
*byte = b;
byte++;
} while (n--);
return (s);
}
