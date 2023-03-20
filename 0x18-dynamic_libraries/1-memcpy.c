#include "main.h"
/**
*_memcpy - copies memory area
*
*@dest: pointer for location of copied memory
*@src: pointer for memory to be copied
*@n: number of memory to be copied
*
*Return: dest(copied memory)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int byte = 0;
do {
dest[byte] = src[byte];
byte++;
} while (byte < n);

return (dest);

}
