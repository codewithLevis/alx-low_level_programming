#include "variadic_functions.h"

/**
*sum_them_all - returns sum of all its parameters
*
*@n: first parameter
*
*Return: NULL or total
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int total = 0;

	va_list value;

	if (n != 0)
	{
		va_start(value, n);
		m = 0;

		while (m < n)
		{
			total += va_arg(value, int);
			m++;
		}
		return (total);
	}

	return (0);
}
