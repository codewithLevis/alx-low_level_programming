#include <stdlib.h>
#include "main.h"

/**
*str_concat - a function that concatenates two strings
*@s1: first pointer argument
* @s2: second pointer argument
* Return: joined strings
*/

char *str_concat(char *s1, char *s2)
{
	int n = 0;
	int m = 0;
	char *str;
	
	if (s1 == NULL || s2 == NULL)
		str = '\0';

	for (; s1[n] != '\0';)
		++n;
	for (;s2[m] != '\0';)
		++m;
	str = malloc(sizeof(char) * (n + m + 2));
	
	do {
	*str = s1[n];
	str[n] = s2[m - 1];
	n++;
	} while (s2[m] != '\0');

	str[n] = '\0';

	return (str);
}
