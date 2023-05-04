#include "main.h"
/**
 * set_bit - fun
 * @n: para
 * @index: para
 *
 * Return: in
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
