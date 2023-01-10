#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*
*@s: pointer to string
*@accept: parameter pointer to substring
*
*Return: numberof bytes from accept in segment s
*/
unsigned int _strspn(char *s, char *accept)
{
int x, y, z, bytes;

x = 0;
bytes = 0;
do {
y = 0;
z = 0;
for (z = 0; accept[z] != '\0'; z++)

if (s[x] == accept[z])
{
bytes++;
y = 1;
}
if (y == 0)
return (bytes);
x++;
} while (s[x] != '\0');

return (0);
}
