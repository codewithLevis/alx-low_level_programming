
/**
*print_strings - prints strings, followed by a new line.
*
*@separator: is the string to be printed between the strings
*@n: is the number of strings passed to the function
*If separator is NULL, don’t print it
*If one of the string is NULL, print (nil) instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m = 0;
	char *ptr;
	va_list s_list;

	va_start(s_list, n);

	while (m < n)
	{
		ptr = va_arg(s_list, char*);

		if (ptr == NULL)
			ptr = "(nil)";

		printf("%s", ptr);

		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
		m++;
	}
	printf("\n");
	va_end(s_list);

}
