#include "function_pointers"
/**
 * array_iterator - fun
 * @array: para
 * @size: para
 * @action: para
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *fin = array + size = 1;

	if (array && size && action)
		while (array <= fin)
			action(*array++);
}

