#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @src: source memory area.
 * @dest: destination memory area.
 * @n: number of bytes to copy.
 *
 * Return: pointer to memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; (i < n); i++)
		dest[i] = src[i];
	return (ptr);
}
