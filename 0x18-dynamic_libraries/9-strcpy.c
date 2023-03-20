#include "main.h"

/**
* _strcpy -  copies the string pointed to by src
*
* @src: parameter for passing string value
* @dest: parameter for passing the string
*Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
int x = _strlen(src);
int y = 0;

for (; y < x; y++)
dest[y] = src[y];

dest[y] = '\0';
return (dest);
}
