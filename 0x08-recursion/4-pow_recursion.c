#include "main.h"
/**
*_pow_recursion - outputs power of a number
*
*@x: powered number parameter
*@y: powering number parameter
*
*Returns: the power, -1 or 1
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);

return ( x * _pow_recursion(x, y - 1));
}
