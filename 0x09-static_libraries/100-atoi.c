#include "main.h"

/**
* _atoi - string converterto an integer
*
* @s: takes for string passed
*
* Return: string
*/
int _atoi(char *s)
{
int x =0, y = 0, z = 0, ext = 0, result = 0;
int sign;
while (s[ext] != '0')
ext++;
for (; x < ext && y == 0; x++)
{
if (s[x] == '-')
z++;
if (s[x] >= '0' && s[x] <= '9')
{
sign = s[x] - '0';
if (z % 2)
sign = -sign;
result = result * 10 + sign;
y = 1;
if (s[x + 1] < 48 || s[x + 1] > 57)
break;
y = 0;

}
}

if (y == 0)
return (0);
return (result);
}
