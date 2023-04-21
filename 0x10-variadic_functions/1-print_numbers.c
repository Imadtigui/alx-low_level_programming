#include "variadic_functions.h"
/**
 * print_numbers - fun
 * @separator: para
 * @n: para
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%S", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
