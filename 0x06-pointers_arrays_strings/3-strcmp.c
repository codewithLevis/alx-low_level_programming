#include "main.h"
/**
*_strcmp - compares two strings
*@s1: pointer to first string
*@s2: pointer to second string
*Return: value of comparison
*Differnce of ASCII code at the differenting letters
*/
int _strcmp(char *s1, char *s2)
{
int m;
int cmp;

for (m = 0; s1[m] != '\0' && s2[m] != '\0'; m++)
{
/*If strings are equal*/
if (s1[m] == s2[m])
cmp = 0;
/*search for the point the two strings differ*/
if (s1[m] != s2[m])
{
cmp = s1[m] - s2[m];
break;
}
}
return (cmp);
}
