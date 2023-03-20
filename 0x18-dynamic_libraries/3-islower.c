#include "main.h"

/**
*_islower - checks for lower case
*
*@c: parameter for lower case
*
*Return: 1 0r 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
