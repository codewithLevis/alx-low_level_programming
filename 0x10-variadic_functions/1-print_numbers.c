#include "variadic_functions.h"

/**
*print_numbers - that prints numbers, followed by a new line.
*@separator: is the string to be printed between numbers
*@n: is the number of integers passed to the function
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m = 0;
	va_list digit;

	va_start(digit, n);

	while (m < n)
	{
		printf("%d", va_arg(digit, int));

		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
		m++;
	}
	printf("\n");
	va_end(digit);

}
