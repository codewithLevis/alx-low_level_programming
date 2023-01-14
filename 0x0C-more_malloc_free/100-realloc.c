#include <stdlib.h>
#include "main.h"

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated with a call to malloc
* @old_size:  the size, in bytes, of the allocated space for ptr
* @new_size:  the new size, in bytes of the new memory block
*
* Return: pointer new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *str1, *str2;
unsigned int n;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));

str1 = malloc(new_size);
if (!str1)
return (NULL);
str2 = ptr;

if (new_size < old_size)
{
n = 0;
do {
str1[n] = str2[n];
n++;
} while (n < new_size);
}
if (new_size > old_size)
{
n = 0;
do {
str1[n] = str2[n];
n++;
} while (n < old_size);
}
free(ptr);
return (str1);
}
