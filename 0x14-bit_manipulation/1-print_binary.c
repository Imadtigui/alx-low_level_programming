#include "main.h"
/**
 * print_binary - fun
 * @n: para
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, p = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
