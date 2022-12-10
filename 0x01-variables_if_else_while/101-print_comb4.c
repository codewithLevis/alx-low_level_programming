#include <stdio.h>
/**
 * main - prints a numbers separated by comma
 *
 *Return: 0
 */
int main(void)
{
int number,i,k;
for (number = '0'; number <= '9'; number++)
{
for (i = number+1; i <= '9'; i++)
{
    for (k = i+1; k <= '9'; k++)
    {
    putchar(number);
    putchar(i);
    putchar(k);

    putchar(',');
    putchar(' ');

}
}

}
putchar('\n');

}
