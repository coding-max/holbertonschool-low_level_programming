#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string.
 *
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i = ((i - 1)  / 2);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
