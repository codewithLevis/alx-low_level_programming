#include "main.h"
/**
* wildcmp - function that compares two strings
*The special char * can replace any string
*
*@s1: pointer to string 1
*@s2:pointer to string 2
*
*Return: returns 1 if the strings areidentical, otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if ((*s1 != '\0' && *s2 == '\0'))
return (0);

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

if (*s1 != *s2)
return (0);

return (wildcmp(s1 + 1, s2 + 1));
}
