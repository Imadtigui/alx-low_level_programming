#include "main.h"
/**
 * malloc_checked - fun
 * @b: para
 *
 * Return: m
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);
}
