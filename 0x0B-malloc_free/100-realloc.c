#include "main.h"
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	if (new_size <= old_size)
	{
		if (new_size == old_size)
		return (ptr);
		else
		{
			ptr = malloc(sizeof(int) * old_size);
			if (ptr == NULL)
			{
				p = realloc(ptr, sizeof(int) * new_size);
				return (p);
			}
			else if (new_size == 0 && ptr != NULL)
				return (NULL);
		}
	}
}
