#include "main.h"
/**
 * string_nconcat - fun
 * @s1: pa
 * @s2: para
 * @n: param
 *
 * Return: st
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int i, j, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;
	st = malloc(s1l + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		st[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		st[i] = s2[j];
		i++;
	}
	st[i] = '\0';
	return (st);
}
