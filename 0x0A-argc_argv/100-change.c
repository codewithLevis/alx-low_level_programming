#include <stdlib.h>
#include <stdio.h>

/**
*main - prints minimum number of coins to make change for amount of money
*
*@argc: number of arguments passed
*@argv: array of arguments
*argv[1] amount of money to find change
*
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int money;
	int coin_count = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	money = atoi(argv[1]);

	do {
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else
			money -= 1;
		coin_count++;
	} while (money > 0);

	printf("%d\n", coin_count);
	return (0);
}
