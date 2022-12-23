#include "main.h"
/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@str: parameter
*Return: 0
*/

char *string_toupper(char *str)
{
int v = 0;

do {
if (str[v] >= 97 && str[v] <= 122)
str[v] -= 32;
} while (str[v++]);

return (str);
}
