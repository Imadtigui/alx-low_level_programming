#include "main.h"
/**
 * factorial - function
 * @n: para
 *
 * Return: -1 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
