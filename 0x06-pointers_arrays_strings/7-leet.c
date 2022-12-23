#include <main.h>
/**
* leet - encodes a string into 1337
*@str: parameter
*Return: str
*/

char *leet(char *str)

{
int v = 0;


do {
if ((str[v] >= 97 && str[v] <= 122) || (str[v] >= 65) && str [v] <= 90)
{
if(str[v] == 97 || str[v] == 65)
str[v] = '4';
if(str[v] == 101 || str[v] == 69)
str[v] = '3';
if(str[v] == 111 || str[v] == 79)
str[v] = '0';
if(str[v] == 116 || str[v] == 84)
str[v] = '7';
if(str[v] == 108 || str[v] == 76)
str[v] = '1';
}


} while (str[v++]);

return (str);
}
