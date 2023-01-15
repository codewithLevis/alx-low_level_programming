#include "main.h"

/**
*stringlen - finds len of string
*@s: string pointer
*Return: string len
*/
int stringlen(char *s)
{
int i;
for (i = 0; s[i] != '\0';)
i++;
return (i);
}

/**
* _atoi - string converterto an integer
*
* @s: takes for string passed
*
* Return: string
*/
int _atoi(char *s)
{
int counter1, counter2, Flag, len;
int number, digit;
Flag = 0;
counter2 = digit = number = 0;
counter1 = 0;
len = stringlen(s);

do {
if (s[counter2] == '-')
++counter1;
if (s[counter2] >= '0' && s[counter2] <= '9')
{
digit = s[counter2] - '0';
if (counter1 % 2)
digit = -digit;
number = number * 10 + digit;
Flag = 1;
if (s[counter2 + 1] < '0' || s[counter2 + 1] > '9')
break;

Flag = 0;
}

counter2++;
} while (counter2 < len && Flag == 0);

if (Flag == 0)
return (0);

return (number);
}
