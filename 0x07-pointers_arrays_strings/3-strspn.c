#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: constant byte.
 *
 * Return: length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, cont = 0;

	for (i = 0; (s[i] != '\0'); i++)
	{
		cont++;
		if (s[i] == *accept)
			break;
	}
	return (cont);
}
