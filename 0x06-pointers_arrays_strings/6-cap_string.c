#include "main.h"
/**
*cap_string -  capitalizes all words of a string.
*@value: parameter for passing string
*Return: value
*/
char *cap_string(char *value)
{
int i = 0;
for (; value[i] != '\0'; i++)
{

if (value[i] == ' ' || value[i] == '\t' || value[i] == '\n'
|| value[i] == ',' || value[i] == ';' || value[i] == '.'
|| value[i] == '.' || value[i] == '!' || value[i] == '?'
|| value[i] == '"' || value[i] == '(' || value[i] == ')'
|| value[i] == '{' || value[i] == '}')
{
if (value[i + 1] >= 'a' && value[i + 1] <= 'z')
value[i + 1] -= 32;
}

}
return (value);
}
