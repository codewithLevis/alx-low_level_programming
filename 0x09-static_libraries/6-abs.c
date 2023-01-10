#include "main.h"

/**
*_abs - function for absolute value
*
*@check: parameter for holding value
*
*Return: positive number
*/
int _abs(int check)
{
if (check > 0)
{
return (check);
}
else
{
check = -check;
return (check);
}
}

