#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 *Return: 0
 */
int main(void)
{
int number,i;
for (number = '0'; number <= '9'; number++)
{
for (i = '1'; i <= '9'; i++)
    {
    putchar(number);
    putchar(i);
    if (number <= '8' && i<= '8' )
    {
    putchar(',');
    putchar(' ');
    }
    else
    putchar(' ');
    }


}
putchar('\n');
return (0);
}
