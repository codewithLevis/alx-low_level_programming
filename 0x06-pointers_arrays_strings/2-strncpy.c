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
int i = 0;
for( src[i] != '\0'; i < n ; i++)
{
dest[i] = src[i];

}
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
