#include "main.h"
/**
 * _pow_recursion - function
 * @x: para
 * @y: para@
 *
 * Return: -1 or 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
