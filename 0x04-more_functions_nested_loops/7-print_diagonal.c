#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line in the terminal.
 * @n: number of times the character '\' should be printed.
 *
 */
void print_diagonal(int n)
{
	int i, spaces;

	spaces = 0;
	for (i = n; i > 0; i--)
	{
		for (j = spaces; i > 0; i--)
			_putchar(' ');
		_putchar(92);
		spaces++;
	}
}