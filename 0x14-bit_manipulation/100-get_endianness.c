#include "main.h"
/**
 * get_endianness - fun
 *
 * Return: 1
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
