#include "main.h"

/**
* _strlen -returns the length of a string
*
* @s: pointer parameter
*
* Return: length of string
*
*/

int _strlen(char *s)
{
int strlen;

strlen = 0;
while (*s != '\0')
{
++strlen;
s++;
}

return (strlen);
}
/**
* rev_string -  reverses a string
*
* @s: parameter
*Return: non-value
*/
void rev_string(char *s)
{
int y = 0;
char x;
int ext = _strlen(s);

do {
x = s[y];
s[y] = s[ext - y - 1];
s[ext - y - 1] = x;
y++;
} while (y < ext / 2);

}

