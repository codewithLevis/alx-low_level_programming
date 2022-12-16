#include <stdio.h>
#include <math.h>

int main() {
long long num = 612852475143;
long long largest_factor = 1;

long long max_factor = (long long) sqrt(num);
for (long long i = 2; i <= max_factor; i++)
{
while (num % i == 0) {
largest_factor = i;
num /= i;
}
}


if (num > 1)
{
largest_factor = num;
}

printf("%lld\n", largest_factor);
return 0;
}
