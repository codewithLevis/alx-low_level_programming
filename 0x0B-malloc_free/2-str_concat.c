#include "main.h"

/**
*_strlen - finds string's length
*@s: string pointer
*Return: length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
*str_concat - function that concatenates two strings
*@s1: first string
*@s2: second string
*Return:  pointer to a newly allocated space in memory or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc(len1 + len2 + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';
	return (s);

}
