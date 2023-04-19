#include "function_pointers"
/**
 * int_index - fun
 * @array: para
 * @size: para
 * @cmp:para
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
