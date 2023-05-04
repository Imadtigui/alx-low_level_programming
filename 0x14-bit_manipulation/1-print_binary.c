#include "main.h"
/**
 * print_binary - fun
 * @n: para
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int t;

	for (i = 63; i >= 0; i--)
	{
		t = n >> i;
		if (t & 1)
		{
			_putchar('1');
			t++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
