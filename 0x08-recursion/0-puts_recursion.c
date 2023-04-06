#include "main.h"
/**
 * _put_recursion: is a function that can help us to puts a string.
 * return void.
 * @s: is a pointer.
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
