#include "main.h"

int calculate_prime(int num1, int num2);

/**
*is_prime_number - checks for prime number
*
*@n: parameter for passing number to be checked
*
*Return: 1 if a prime number, otherwise  0
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

if (n <= 3)
{
return (1);
}

return (calculate_prime(n, 2));
}

/**
*is_prime_number - checks for divisibility of 2
*
*@num1: parameter for passing number to be checked
*num2: iterator
*
*Return: 1 or 0
*/
int calculate_prime(int num1, int num2)
{
if (num1 % num2 == 0)
return (0);

if (num2 == num1 / 2)
return (1);

return (calculate_prime(num1, num2 + 1));
}
