#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random valid passwords for the program 101-crackme.
*
* Return:  0
*/
int main(void)
{
int len = 0;
int sum = 0;
int x;
int password[10];

srand(time(NULL));

do {
password[len] = rand() % 80;
sum += (password[len] + '0');
putchar(password[len] + '0');
if ((2772 - sum) - '0' < 80)
{
x = 2772 - sum - '0';
sum += x;
putchar(x + '0');
break;
}
}while (len < 10);
return (0);
}
