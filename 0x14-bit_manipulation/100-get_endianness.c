#include "main.h"
/**
 * get_endianness - fun
 *
 * Return: char
 */
int get_endianness(void)
{
	unsigned long int n = 1;
	return (*(char *)&n);
}
