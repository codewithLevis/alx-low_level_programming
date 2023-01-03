#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*
*@s:pointer to first string
*@accept: pointer to second string
*
*Return: a pointer to the byte in s matching accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
int x, y;

x = 0;
do {
y = 0;
while (accept[y] != '\0')
{
if (*s == accept[y])
return (s);
y++;
}
s++;
x++;
} while (*s != '\0');

return (NULL);
}
