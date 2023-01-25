#include "main.h"

/**
*_strdup - returns a pointer to a newly string
*which is a duplicate of the string str
*@str: string
*Return: sucess or null
*/

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (j < i)
	{
	s[j] = str[j];
	j++;
	}

	s[j] = '\0';
	return (s);
}
