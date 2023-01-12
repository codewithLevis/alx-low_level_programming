#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: total numbers passed
*@argv: array of numbers passed
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int m = 1;
	int n;
	int sum = 0;
	
	if (argc > 1)
	{
		do {
			n = 0;
			do {
				if(isdigit(argv[m][n]))
				{
					sum += atoi(argv[m]);
				}
				else
				{
					printf("Error\n");
					return(1);
				}
				n++;
			} while (argv[m][n] != '\0');
			m++;
		} while (m < argc);
	}
	
	else
	{
		printf("0\n");
	}
	
	printf("%d\n", sum);
	return (0);
}