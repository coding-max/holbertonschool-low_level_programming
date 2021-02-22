#include "holberton.h"

/**
 * print_number -  prints an integer.
 * @n: number to print.
 *
 */

void print_number(int n)
{
	unsigned int num;

	if (n >= 0)
		num = n;
	else
	{
		num = -n;
		_putchar('-');
	}
	/* recursion */
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
