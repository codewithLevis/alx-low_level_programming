#include "main.h"

/**
* _strncpy  - concatinates strings
*
* @dest: first pointer argument
* @src: second pointer argument
* @n: parameter for extent of string
*
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
int m = 0;

while (src[m] != '\0' && m < n)
dest[m++] = src[m];

while (m < n)
dest[m++] = '\0';

return (dest);
}
