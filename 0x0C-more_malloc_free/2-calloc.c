#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * the memory is set to zero.
 * @nmemb: number of elements.
 * @size: size in bytes.
 * Return: pointer to the allocated memory.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, final = nmemb * size;
	char *arr;

	if (final == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < final; i++)
		arr[i] = 0;
	return (arr);
}
