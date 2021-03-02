#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string.
 *
 * Return: Length of @s.
 */
int _strlen(char *s)
{
	int i = 0;
	int cont = 0;

	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
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

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];
	return (ptr);
}

/**
 * str_concat - concatenates two strings in a newly allocated space in memory.
 * @s1: first sring.
 * @s2: second string.
 *
 * Return: pointer to the concatenated string.
 * or NULL if insufficient memory was available.
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length = sizeof(char) * _strlen(s1);
	int s2_length = sizeof(char) * _strlen(s2);
	char *aux = malloc(s1_length + s2_length + 1);
	int i, j;

	if (aux == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		aux[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		aux[i] = s2[j];
	aux[i] = '\0';
	return (aux);
}
