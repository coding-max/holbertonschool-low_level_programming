#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers, followed by a \n.
 * @a: array.
 * @n: number of elements.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
