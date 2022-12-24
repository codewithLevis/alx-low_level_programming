#include <stdio.h>
/**
*main - prints fibonnaci numbers
*
*Return: 0
*/

int main(void)
{
int i;
unsigned long int prev = 0, curr = 1, next;

for (i = 2; i <= 99; i++)
{
next = prev + curr;
if (i <= 98)
printf("%lu, ", next);
if (i == 99)
printf("%lu", next);
prev = curr;
curr = next;
}

return 0;
}
