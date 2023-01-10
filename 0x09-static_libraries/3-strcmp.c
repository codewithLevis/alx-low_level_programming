#include "main.h"

int _strcmp(char *s1, char *s2)
{
int m, compstr;

m = 0;

do {
m++;
} while (s1[m] == s2[m] && s1[m] != '\0');

compstr = s1[m] - s2[m];
return (compstr);
}
