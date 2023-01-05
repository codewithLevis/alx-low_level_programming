#include "main.h"
/**
*_strlen_recursion - outputs lengthof a string
*
*@s: string pointer parameter
*
*Return: lenght of string:
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
