#include "main.h"
/**
*reverse_array - reverses the content of an array of integers
*@a: pointer to the passed parameter
*@n: sizeof(a) / sizeof(int)
*Return: non-value
*/
void reverse_array(int *a, int n)
{
int control = 0, rev;

for (n = n - 1; control < n;)
{
rev = a[control];
a[control++] = a[n];
a[n--] = rev;
}

}
