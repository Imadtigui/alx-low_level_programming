#include "main.h"
/**
 * _puts_recursion - short disc
 * return void.
 * @s: is a pointer.
 *
 * long discription.
 * main.h est un header
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
