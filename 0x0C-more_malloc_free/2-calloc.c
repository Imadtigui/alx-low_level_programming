#include "main.h"
/**
 * mm - fun
 * @s:para
 * @b: para
 * @n: para
 *
 * Return: ptr
 */
char *mm(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * _calloc - fun
 * @nmemb: para
 * @size: para
 *
 * Return: m
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	  void *m;

	  if (size == 0 || nmemb == 0)
	  {
		  return (NULL);
	  }

	  m = malloc(sizeof(int) * nmemb);
	  if (m == 0)
		  return (NULL);

	  mm(m, 0, sizeof(int) * nmemb);
	  return (m);
}
