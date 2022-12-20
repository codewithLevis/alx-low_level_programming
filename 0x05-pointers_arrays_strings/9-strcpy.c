#include "main.h"

/**
* _strlen -returns the length of a string
*
* @s: pointer parameter
*
* Return: length of string
*
*/

int _strlen(char *s)
{
int strlen;

strlen = 0;
while (*s != '\0')
{
++strlen;
s++;
}

return (strlen);
}

/**
* _strcpy -  copies the string pointed to by src, including the terminating null byte '\0'
*
* @src: parameter for passing string value
* @dest: parameter for passing the string
*Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
int x = _strlen(src);
int y = 0;

for (; y < x; k++)
dest[y] = src[y];

dest[y] = '\0';
return (dest);
}
