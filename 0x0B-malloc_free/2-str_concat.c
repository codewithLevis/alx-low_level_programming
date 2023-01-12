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
	int joint_len;
	int concat_index;
	char *str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	for (; s1[n] != '\0';)
		++n;
	for (;s2[m] != '\0';)
		++m;
	
	joint_len = n + m;
	str = malloc(sizeof(char) * joint_len);
	
	for (joint_len = 0; s1[joint_len]; joint_len++)
		str[concat_index++] = s1[joint_len];

	for (joint_len = 0; s2[joint_len]; joint_len++)
		str[concat_index++] = s2[joint_len];

	return (str);
}
