#include "holberton.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: max bytes to take from src.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, cont = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; ((cont < n) && (src[j] != '\0')); i++, j++)
	{
		dest[i] = src[j];
		cont++;
	}
	dest[i + 1] = src[j + 1];
	return (ptr);
}
