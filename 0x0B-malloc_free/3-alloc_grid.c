#include "main.h"
/**
 * alloc_grid - fun
 * @width: para
 * @height: para
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **tb, i, j;

	tab malloc(sizeof(*tab) * height);
	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tb[i] = malloc(sizeof(**tb) * width);
			if (tb[i] == 0)
			{
				while (i--)
					free(tb[i]);
				free(tb);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
