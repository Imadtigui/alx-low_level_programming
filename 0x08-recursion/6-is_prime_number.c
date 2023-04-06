#include "main.h"
/**
 * prime - is a function
 * @n: parametre
 * @i: cccc
 *
 * Return: 1 if we can
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
 * is_prime_number - principale function
 * @n: para
 *
 * Return: 1 if n is a prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
