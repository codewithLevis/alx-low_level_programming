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
	int m, n, o, p;
	char *str;
	
	m = n =o = p = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[m] != '\0')
	{
		++n;
		m++;
	}
	
	while (s2[o] != '\0')
	{
		++p;
		o++;
	}
	
	str = malloc(sizeof(char) * (p + n + 1));
	
	if (str == NULL)
		return (NULL);
	do {
		str[m + n] = s1[m];
		m++;
	} while (m < n);
	do {
		str[o + p] = s2[o];
		o++;
	} while (o < p);
	str[o + p] = '\0';
	return (str);
}
