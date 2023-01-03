#include "main.h"
/**
*_strstr - finds occurrence of the substring needle in the string haystack
*
*@haystack: first string pointer
*@needle" second string pointer
*
*Return: a pointer to the beginning of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int x, y;

x = 0;

do {
y = 0;
while (needle[y] != '\0')
{
if (haystack[x + y] != needle[y])
break;
y++;
}

if (!needle[y])
return (&haystack[x]);
x++;
} while (haystack[x] != '\0');
return (NULL);
}
