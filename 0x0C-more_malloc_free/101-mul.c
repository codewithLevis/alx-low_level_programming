#include <stdio.h>
#include <stdlib.h>

int conf_digit(int c);
int conf_number(char *num);
int conv_to_int(char *s);
int mul(char *num1, char *num2);

/**
*main - final execution of code
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	if (!conf_number(argv[1]) || !conf_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	product = mul(argv[1], argv[2]);
	printf("%d\n", product);
    	return (0);
}

/**
*  conf_digit -confirms if digits
*  @c: parameter for passing argument
*  Return: 0 or 1
*/
int conf_digit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}

/**
*conf_number - confirms if number
*@num: pointer to value
*return 0 or 1;
*/

int conf_number(char *num)
{
	int iter = 0;
	
	do {
		if (!conf_digit(num[iter]))
			return (0);
		iter++;
	} while (num[iter]);
	
	return (1);
}

/**
* conv_to_int - string converterto an integer
*
* @s: takes for string passed
*
* Return: string
*/
int conv_to_int(char *s)
{
int x =0, y = 0, z = 0, ext = 0, result = 0;
int sign;
while (s[ext] != '0')
ext++;
for (; x < ext && y == 0; x++)
{
if (s[x] == '-')
z++;
if (s[x] >= '0' && s[x] <= '9')
{
sign = s[x] - '0';
if (z % 2)
sign = -sign;
result = result * 10 + sign;
y = 1;
if (s[x + 1] < 48 || s[x + 1] > 57)
break;
y = 0;

}
}

if (y == 0)
return (0);
return (result);
}

/**
*mul -  multiplies two positive numbers
*@num1: pointer to first positive number
*@num2: pointer to second positive number
*Return: product
*/

int mul(char *num1, char *num2)
{
	int y = conv_to_int(num1);
	int x = conv_to_int(num2);
	int product = x * y;
	
	return(product);
}
