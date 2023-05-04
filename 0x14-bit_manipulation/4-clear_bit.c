#include "main.h"
/**
 * clear_bit - fun
 * @n: para
 * @index: para
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
