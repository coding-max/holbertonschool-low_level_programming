#include "holberton.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: number of times the character '_' should be printed.
 *
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
