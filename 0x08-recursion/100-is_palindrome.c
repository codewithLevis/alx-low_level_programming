/**
*_strlen_recursion - outputs lengthof a string
*
*@s: string pointer parameter
*
*Return: lenght of string:
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
*real_recursion_palindrome - checks for palindrome
*First checks if the last two digits are same then proceeds to the center
*@m: iterating parameter
*@str: string pointer
*Return: 0 or 1
*/

int real_recursion_palindrome(int m, char *str)
{
if (m <= 1)
return (1);

if (str[0] != str[m - 1])
return (0);
return (real_recursion_palindrome(m - 2, str + 1));
}

/**
*_strlen_recursion - checks for palindrome
*@s: string pointer
*Return: function's real_recursion_palindrome value
*/

int is_palindrome(char *s)
{
int n = _strlen_recursion(s);

return (real_recursion_palindrome(n,  s));
}
