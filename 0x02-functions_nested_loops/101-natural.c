#include <stdio.h>
/**
 * main - finds total of all multiples of 3 and 5 between 0 and 1024
 *
 * Return: 0
 */
int main(void)
{
	int mult = 0;
	int tot = 0;

	for (; mult <= 1024; mult++)
	{
		if (mult > 0)
		{
			if (mult % 5 == 0 || mult % 3 == 0)
			{
				tot = mult + tot;
			}
		}
	}
	printf("%d", tot);
	printf("\n");
	return (0);
}
