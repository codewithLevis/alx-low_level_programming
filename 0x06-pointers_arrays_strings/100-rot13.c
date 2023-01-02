#include "main.h"
/**
* rot13 - function that encodes a string using rot13.
*
*@value: parameter
*
*Return: value
*/

char *rot13(char *value)
{
int i = 0, swapp;
char  first_rot13[] = {'a', 'b', 'c', 'd', 'e',
'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z'};
char second_rot13[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
'I', 'J', 'K', 'L', 'M'};

while (value[i] != '\0')
{
for (swapp = 0; swapp <= 52; swapp++)
{
if (first_rot13[swapp] == value[i])
{
value[i] = second_rot13[swapp];
break;
}
}
i++;
}
return (value);
}
