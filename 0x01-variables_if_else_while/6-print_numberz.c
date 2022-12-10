#include <stdio.h>
/**
 * main - Use for loop
 *
 * Description: 'Prints all single digit numbers of base 10 '
 *
 * Return: 0
 */
int main(void)
{
  int numbers;

  for (numbers = '0'; numbers <= '9'; numbers++)

  putchar(numbers);
	putchar('\n');
	return (0);
}
