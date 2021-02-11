#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print a triangle, followed by a new line.
 * @size: base and height.
 *
 */
void print_triangle(int size)
{
	int i, spaces;

	for (i = 1; i <= size; i++)
	{
		for (spaces = (size - 1); spaces < 0; spaces--)
			_puthar(' ');
		for (hash = i; hash > 0; hash--)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
