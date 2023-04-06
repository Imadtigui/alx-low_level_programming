#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return (1 + _strlen_recurtion(s + 1));
	}
}
