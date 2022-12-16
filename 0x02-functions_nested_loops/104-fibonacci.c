#include <stdio.h>

int main(void) {
int i;
unsigned long int prev = 0, curr = 1, next;

for (i = 2; i < 98; i++)
{
next = prev + curr;
if (i < 97)
printf("%lu, ", next);
if (i == 97)
printf("%lu", next);
prev = curr;
curr = next;
}

return 0;
}
