#include "main.h"
/**
 * create_array - fun
 * @size: para
 * @c: para
 *
 * Return: t
 */
char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		*(t + i) = c;
	}
	if (size == 0)
		return (NULL);
	else
		return (t);
}
