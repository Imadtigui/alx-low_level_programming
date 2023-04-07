#include "main.h"
/**
 * _str - function
 * @s: pointer
 *
 * Return: 0
 */
int _str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str(s + 1));
}
/**
 * funn -function
 * @s: pointer
 * @i: intg
 * @len: lenge
 *
 * Return: 0
 */
int funn(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (funn(s, i + 1, len - 1));
}
/**
 * is_palindrome - function
 * @s: pointer
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (funn(s, 0, _str(s)));
}
