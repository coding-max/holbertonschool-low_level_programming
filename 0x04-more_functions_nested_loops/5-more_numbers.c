#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by \n.
 *
 */
void more_numbers(void)
{
	int i, d, u;

	for (i = 1; i < 15; i++)
	{
		d = i / 10;
		u = i % 10;
		if (d != 0)
			_putchar(d + '0');
		_putchar(u + '0');
	}
	_putchar('\n');
}
