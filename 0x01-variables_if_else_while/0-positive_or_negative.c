#include <stdlib.h>
#include <time.h>
/**
 * main - prints random number
 *Description: 'checks for positive,negative or zero'
 * Return: 0
 */
int main(void)
{
  int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		puts("%d is positive\n", n);
	else if (n == 0)
		puts("%d is zero\n", n);
	else
		puts("%d is negative\n", n);
	return (0);
}
