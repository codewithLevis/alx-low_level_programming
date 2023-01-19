#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - execution of program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success) or exits(Failure)
 */

int main(int argc, char *argv[])
{
	int num1, num2, final_result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
  
  final_result = f(n1, n2);
	printf("%d\n", final_result);

	return (0);
}
