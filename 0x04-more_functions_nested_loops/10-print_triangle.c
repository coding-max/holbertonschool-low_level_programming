#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print a triangle, followed by a new line.
 * @size: base and height.
 *
 */
void print_triangle(int size)
{
	int i, j, k, spaces;

	spaces = (size - 1);
	for (i = 1; i <= size; i++)
	{
		for (j = spaces; j > 0; j--)
			_putchar(' ');
		for (k = i; k > 0; k--)
			_putchar('#');
		_putchar('\n');
		spaces--;
	}
	if (size < 1)
		_putchar('\n');
}
