#include <stdio.h>
/**
* main - prints a numbers separated by comma
*
*Return: 0
*/
int main(void)
{
int number,i,j;
for (number = '0'; number <= '9'; number++)
{
for (i = number+1; i <= '9'; i++)
{
for (j = number+2; j <= '9'; j++)
{
putchar((number % 10) + '0');
putchar((i % 10) + '0');
putchar((k % 10) + '0');
if (number == 7 && i == 8 && j == 9)
continue;

putchar(',');
putchar(' ');

}
}

}
putchar('\n');
return (0);
}
