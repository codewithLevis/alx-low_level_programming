#include <stdio.h>
#include <math.h>
#include <stdint.h>
/**
* main - prints the largest prime factor of the number 612852475143
*Return: 0;
*/

int main(void) {
int64_t num = 612852475143;
int64_t largest_factor = 0;
int64_t a = 2;

while(a <= sqrt(num))
{
for (;num % a == 0;)
{
largest_factor = a;
num /= a;
}
a++;
}

if (num > 1) {
largest_factor = num;
}

printf("%d\n", largest_factor);

return 0;
}
