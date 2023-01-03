#include "main.h"
/**
*_strchr -  locates a character in a string
*
*@s:pointer to string
*@n: parameter to chracter to be passed
*Return: a pointer to the first occurrence of the character c in the string s
*/
char *_strchr(char *s, char c)
{
int x;

for (x = 0; s[x] != '\0' && s[x] != c; x++)
;
if (s[x] == c)
return (&s[x]);
return (NULL);
}
