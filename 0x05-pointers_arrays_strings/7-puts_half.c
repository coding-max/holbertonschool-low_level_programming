#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string.
 *
 */
void puts_half(char *str)
{
	int i, half_length;

	if (_strlen(str) % 2 != 0)
		half_length = (_strlen(str) - 1) / 2;
	else
		half_length = _strlen(str) / 2;
	i = half_length;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
