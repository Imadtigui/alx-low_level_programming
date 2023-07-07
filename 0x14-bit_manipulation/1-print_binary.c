#include "main.h"
/**
 * print_binary - fun
 * @n: para
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, printed = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
