#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array of chars
*And initializes it with a specific char
*@size: number of characters
@c: passed character
*Return: Null or 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
return(0);
ptr = malloc(sizeof(char) * size);

if (ptr == 0)
return (0);
for(i = 0; i < size; i++)
{
ptr[i] = c;
}
return(ptr);
}
