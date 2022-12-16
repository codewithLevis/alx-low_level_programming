#include <main.h>
/**
* print_line - prints line
*@n: holds the argumen
* Return: line
*/

void print_line(int n)
{
int i = 0;
for (; i < n; i++) {
putchar('_');
}
putchar('\n');
}
