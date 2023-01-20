#include "main.h"
/**
*cap_string -  capitalizes all words of a string.
*@arr: parameter for passing string
*Return: capitalized string
*/
char *cap_string(char *arr)
{
int i = 0;

while (arr[++i])
{


while (!(arr[i] >= 'a' && arr[i] <= 'z'))
i++;
if (arr[i - 1] == ' ' ||
arr[i - 1] == ',' ||
arr[i - 1] == ';' ||
arr[i - 1] == '.' ||
arr[i - 1] == '!' ||
arr[i - 1] == '?' ||
arr[i - 1] == '(' ||
arr[i - 1] == ')' ||
arr[i - 1] == '"' ||
arr[i - 1] == '{' ||
arr[i - 1] == '}' ||
arr[i - 1] == '\n' ||
arr[i - 1] == '\t')
arr[i] -= 32;

}

return (arr);
}
