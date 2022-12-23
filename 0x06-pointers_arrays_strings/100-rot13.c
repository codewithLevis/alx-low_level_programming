#include "main.h"
/**
* rot13 - function that encodes a string using rot13.
*
*@unit: parameter
*
*Return: unit
*/

char *rot13(char *unit)
{
int letter;

do {
for (;(unit[letter] >= 'a' && unit[letter] <= 'z') || (unit[letter] >= 'A' && unit[letter] <= 'Z'); letter++)
{
if ((unit[letter] >= 'A' && unit[letter] <= 'M') || (unit[letter] >= 'a' && unit[letter] <= 'm'))
unit[letter] += 13;
else
unit[letter] -= 13;
}
letter++;
}while (unit[letter] != '\0');
return (unit);
}
