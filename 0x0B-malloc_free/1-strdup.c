#include "main.h"
/**
 * _strdup - fun
 * @str: para
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, siz = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[siz] != '\0'; siz++)
		;
	s = malloc(siz * sizeof(*str) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < siz; i++)
			s[i] = str[i];
	}
	return (s);
}
