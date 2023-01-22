#include "variadic_functions.h"

/**
*print_all - prints anything
*@format: a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	  int m = 0;
	  char *ptr, *sep = "";

	  va_list arg;

	  va_start(arg, format);

	  if (format)
	  {
		  while (format[m])
		  {
			  switch (format[m])
			  {
				  case 'c':
				  	printf("%s%c", sep, va_arg(arg, int));
				  	break;
				  case 'i':
					  printf("%s%d", sep, va_arg(arg, int));
					  break;
				  case 'f':
					  printf("%s%f", sep, va_arg(arg, double));
					  break;
				  case 's':
					  ptr = va_arg(arg, char *);

					  if (!ptr)
						  ptr = "(nil)";
					  printf("%s%s", sep, ptr);
					  break;
				  default:
				  	m++;
				  	continue;
			  }
			  sep = ", ";
			  m++;
		  }
	  }

	  printf("\n");
	  va_end(arg);
}
