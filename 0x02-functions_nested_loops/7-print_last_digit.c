#include "holberton.h"

/**
 * print_last_digit - return the last digit of an integer.
 * @n: int to apply.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = (n * -1);
	n = (n % 10);
	_putchar(n + '0');
	return (n);
}
