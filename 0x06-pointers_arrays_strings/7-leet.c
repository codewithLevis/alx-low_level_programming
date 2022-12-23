#include "main.h"
/**
* leet - encodes a string into 1337
*@unit: parameter
*Return: unit
*/

char *leet(char *unit)
{
char value[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

int range1, range2;
range1 = 0;


do {
range2 = 0;
while (range2 <= 7)
{
if (unit[range1] == value[range2] || unit[range1] - 32 == value[range2])
unit[range1] = range2 + '0';
range2++;
}
} while (unit[++range1]);
return (unit);
}
