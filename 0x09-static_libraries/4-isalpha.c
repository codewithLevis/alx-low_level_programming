#include "main.h"

/**
* _isalpha - checks for alphabetics of all cases
*
*@c: parameter for alphabets
*Return: 1 or 0
*/

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
