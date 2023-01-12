#include <stdio.h>
#include <stdlib.h>

/**
*main -  multiplies two numbers
*
*@argc: number of arguments passed to the program
*@argv: arryays of strings
*
*Return: (0)
*/

int main(int argc, char *argv[])
{
	int count = 1;
	int mult = 1;

	if (argc != 3)
	{
	do {
		mult *= atoi(argv[count]);
		count++;
	} while (count < argc);
	printf("%d\n", mult);
	}

	else
	printf("Error\n");
	return (0);
}
