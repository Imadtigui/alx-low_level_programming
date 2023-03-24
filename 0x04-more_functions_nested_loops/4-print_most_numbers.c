#include "main.h"
/**
 * print_most_numbers - prints the numbers
 *
 * Return = Void
 */

void print_most_numbers(void)
{

	int i;

	i = 0;

	while (i <= 9)
	{
	if (i == 2 || i == 4)
	{
		i++;
		continue;
	}

		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
