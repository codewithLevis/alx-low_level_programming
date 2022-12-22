#include "main.h"

/**
* _strcat - concatinates two strings
* @dest : First pointer parameter
* @src : First pointer parameter
* Return: a joined string
*/
char *_strcat(char *dest, char *src)
{
int n = 0;
int m = 0;

for (; dest[n] != '\0';)
++n;

do {
++m;
dest[n] = src[m - 1];
n++;

}while (src[m] != '\0');
dest[n] = '\0';

return (dest);
}
