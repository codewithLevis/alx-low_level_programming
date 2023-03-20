#include "main.h"

/**
* _strncat  - concatinates strings
*
* @dest: first pointer argument
* @src: second pointer argument
* @n: parameter for extent of string
*
* Return: joined strings
*/
char *_strncat(char *dest, char *src, int n)
{
int m = 0;
int l = 0;

for (; dest[m] != '\0';)
m++;

for (; l < n && src[l] != '\0' ; l++)
dest[m + l] = src[l];

dest[l + m] = '\0';
return (dest);
}
