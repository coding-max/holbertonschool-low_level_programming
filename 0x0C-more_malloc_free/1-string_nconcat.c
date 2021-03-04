#include "holberton.h"
#include <stdlib.h>

char *_strcat(char *dest, char *src);

/**
 * string_nconcat - concatenates two strings,
 * the entire first string and n chars from the second string.
 * @s1: first string .
 * @s2: second string.
 * @n: numbers of chars to concatinate from the second string.
 * Return: pointer to the new string.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *aux = malloc(sizeof(s1) + n);
	if (aux == NULL)
		return (NULL);

	aux[0] = '\0';
	aux = _strcat(aux, s1);
	for (i = 0; aux[i] != '\0'; i++);
	for (j = 0; (j < (n - 1) || s2[j] != '\0'); j++, i++)
		aux[j] = s2[i];
	aux[j] = '\0';
	return (aux);
}

/**
 * *_strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *ptr = dest;

	if (src == NULL)
		return (ptr);
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];
	return (ptr);
}
