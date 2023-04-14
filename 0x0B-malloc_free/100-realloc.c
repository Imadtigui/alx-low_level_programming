#include "main.h"
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == old_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
