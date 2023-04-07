#include "main.h"
/**
 * sqrtt - function
 * @n: para
 * @i:para2
 *
 * Return: -1
 */
int sqrtt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrtt(n, i + 1));
}
/**
 * _sqrt_recursion - function
 * @n:para3
 *
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtt(n, 0));
}
