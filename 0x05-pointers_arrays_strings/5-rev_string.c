#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: string.
 *
 */
void rev_string(char *s)
{
	int i, j;

	i = _strelen(s);
	for(j = 0; j <= i; j++, i--)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
	}
}
