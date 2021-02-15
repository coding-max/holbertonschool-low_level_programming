#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: string.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int size;

	while (s[i] != '\0')
		i++;
	i--;
	size = i;

	char aux[size];

	i = 0;
	while (s[i] != '\0')
	{
		aux[(size - i)] = s[i];
		i++;
	}

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = aux[i];
		i++;
	}
}
