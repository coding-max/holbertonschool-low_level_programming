#include "holberton.h"

/**
 * print_last_digit - return the last digit of an integer.
 * @n: int to apply.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = x * (-1);

	_putchar(x + '0');
	return (x);
}
