#include "main.h"

/**
*jack_bauer - outputs time in min and hr
*Return: 0
*/
void jack_bauer(void)
{
int t1, t2, t3, t4;

t1 = '0';
while (t1 < '3')
{
	t2 = '0';
	while (t2 <= '9')
	{
		t3 = '0';
		while (t3 <= '5')
		{
			t4 = '0';
			if (t1 == '2' && t2 > '3')
				break;
			while (t4 <= '9')
			{
				_putchar(t1);
				_putchar(t2);
				_putchar(':');
				_putchar(t3);
				_putchar(t4);
				_putchar('\n');
				t4++;
			}
			t3++;
		}
		t2++;
	}
	t1++;
}
}
