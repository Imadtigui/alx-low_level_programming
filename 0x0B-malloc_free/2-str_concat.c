#include "main.h"
/**
 * str_concat - fun
 * @s1: para
 * @s2: para
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int ln1 = 0, ln2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		ln1++, i++;
	while (*(s2 + j))
		ln2++, j++;
	ln2++;
	concat = malloc(sizeof(char) * (ln1 + ln2));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (i < ln1)
	{
		*(concat + 1) = *(s2 + j);
		i++, j++;
	}
	return (concat);
}

