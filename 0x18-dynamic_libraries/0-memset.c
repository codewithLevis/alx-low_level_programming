#include "main.h"
/**
*_memset - fills memory with a constant byte
*
*@s: pointer to memory location to be filled with bytes
*@b: pointer tothe bytes to be filled to a memory location
*@n: number of bytes to be filled
*
*Return: s(Filled memory location)
*/
char *_memset(char *s, char b, unsigned int n)
{
char *byte = s;
n = n - 1;
do {
*byte = b;
byte++;
} while (n--);
return (s);
}
