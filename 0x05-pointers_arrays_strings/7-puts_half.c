#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string.
 *
 */
void puts_half(char *str)
{
	int i, half, length = _strlen(str);

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	i = length - half;
	while (i <= length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
