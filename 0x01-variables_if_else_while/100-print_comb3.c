#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 *Return: 0
 */
int main(void)
{
int number,i;
for (number = 0; number <= 8; number++)
{
for (i = number+1 ; i <= 9; i++)
    {
    putchar((number % 10) + '0');
    putchar((i % 10) + '0');
    if (number ==8 && i ==9 )
        continue;

    putchar(',');
    putchar(' ');

    }


}
putchar('\n');
return (0);
}
