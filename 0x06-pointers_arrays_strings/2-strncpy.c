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

do {
dest[m] = src[m];
m++;
} while (m < n && src[m] != '\0');
for ( ; m < n; m++)
dest[m] = '\0';

return (dest);
}
