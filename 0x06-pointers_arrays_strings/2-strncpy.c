#include "holberton.h"

/**
 * *_strncpy - copies a string.
 * @dest: destination.
 * @src: source.
 * @n: max bytes to take from src.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; ((i < n) && (src[i] != '\0')); i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
