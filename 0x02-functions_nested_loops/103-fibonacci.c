#include <stdio.h>
/**
*main - prints fibonacci numbers
*Return: 0
*/

int main(void) {
int i;
long unsigned int prev = 1, curr = 2, next,sum;
sum = 0;
i = 2;
while (i < 50)
{
next = prev + curr;
if (next < 4000000)
{
if (next% 2 == 0)
sum = next + sum;
}

prev = curr;
curr = next;
i++;
}
printf("%lu", sum);
putchar('\n');
return 0;
}
