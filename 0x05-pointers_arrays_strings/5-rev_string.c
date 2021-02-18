#include "holberton.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 * @s: string.
 *
 */
void rev_string(char *s)
{
	int i, j;
	char aux;

	i = _strlen(s);
	i--;
	for (j = 0; j <= i; j++, i--)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
	}
}
