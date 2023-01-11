#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments passed to the program
*@argv: arryays of strings
*
*Return: (0)
*/

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc > 1)
	{
	do {
		if (atoi(argv[count]) >= 48 || atoi(argv[count]) <= 57)
		{
			sum *= atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	} while (count < argc);
		printf("%d\n", sum);
	}

	else
	printf("Error\n");
	return (0);
}
