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
	char *t = malloc(sizeof(char) * size);
	unsigned int i;

	if (!t)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(t + i) = c;
	}
	if (size == 0)
		return (NULL);
	else
		return (t);
}
