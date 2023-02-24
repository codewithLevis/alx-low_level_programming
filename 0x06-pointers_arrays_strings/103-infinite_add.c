#include "shell.h"

/**
*rev_string -takes a string as input and reverses the order
*@str - string
*Return: void
*/

void rev_string(char *str)
{
	char *end;
	char tmp;

	if (str == NULL || *str == '\0')
		return;

	end = str;
	while (*end != '\0')
		end++;

	end--;

	while (str < end)
	{
	tmp = *str;
	*str = *end;
	*end = tmp;
	str++;
	end--;
	}
}

/**
*infinite_add - adds two numbers
*@n1:first no
*@n2: second no
*@r: buffer that the function will use to store the result
*@size_r: is the buffer size
*@Return: a pointer to the result
*n1 and n2 will never be empty
*If the result can not be stored in r the function must return 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, digit_count = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';

		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';

		temp_sum = val1 + val2 + carry;

		if (temp_sum >= 10)
			carry = 1;
		else
			carry = 0;

		if (digit_count >= (size_r - 1))
			return (0);

		*(r + digit_count) = (temp_sum % 10) + '0';
		digit_count++;
		j--;
		i--;
	}

	if (digit_count == size_r)
		return (0);

	*(r + digit_count) = '\0';
	rev_string(r);
	return (r);
}
