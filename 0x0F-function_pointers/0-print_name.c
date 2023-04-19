#include "function_pointers.h"
/**
 * print_name - fun
 * @name: para
 * @f: para
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
