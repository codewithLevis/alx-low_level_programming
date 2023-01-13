#include "main.h"
#include <stdlib.h>

char *strn_concat(char *str1, char *str2, int m);
int str_len(char *str);
char *cpy_str(char *s1, char *s2);

/**
*string_nconcat -  function that concatenates two strings
*@s1: pointer to first string
*@s2: pointer to second string
*n: length
*Return: null or string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (!s1 || !s2)
		return NULL;
	if (n >= (unsigned int)str_len(s2))
		n = str_len(s2);

	str = (char*)malloc(str_len(s1) + n + 1);
	if (!str)
		return NULL;

	cpy_str(str, s1);
	strn_concat(str, s2, n);
	return (str);
}

/**
* strn_concat  - concatinates strings
*
* @str1: first pointer argument
* @str2: second pointer argument
* @m: parameter for extent of string
*
* Return: joined strings
*/
char *strn_concat(char *str1, char *str2, int m)
{
	int n, o;

	n = str_len(str1);

	for (o = 0; o < m && str2[o] != '\0'; o++)
		str1[n + o] = str2[o];
	str1[n + o] = '\0';

	return(str1);
}

/**
* cpy_str -  copies the string pointed to by src
*
* @s1: parameter for passing string value
* @s2: parameter for passing the string
*Return: copied string
*/
char *cpy_str(char *s1, char *s2)
{
	int m, n;

	m = str_len(s2);
	n = 0;

	do{
		s1[n] = s2[n];
		n++;
	} while (n < m);

	s1[n] = '\0';

	return(s1);
}
/**
*str_len - finds string's length
*@str: pointer to a string
*Return: length of string
*/
int str_len(char *str)
{
	int i;
	for (i = 0; str[i] != '\0';)
		i++;
	return (i);
}
