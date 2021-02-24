#include "holberton.h"

/**
 * prime_function - auxiliar function.
 * @n: int to evaluate.
 * @i: auxiliar var.
 *
 * Return: 1 or 0.
 */
int prime_function(int n, int i)
{
	if (i == 2)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (prime_function(n, i - 1));
}

/**
 * is_prime_number - return 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to evaluate.
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	int i = (n / 2);

	if (n > 2)
		return (prime_function(n, i));
	if (n < 2)
		return (0);
	else
		return (1);
}
