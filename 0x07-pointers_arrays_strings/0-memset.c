#include "holberton.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: string.
 * @b: constant byte.
 * @n: number of bytes to fill.
 *
 * Return: pointer to memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; (i < n); i++)
		s[i] = b;
	return (ptr);
}
