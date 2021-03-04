#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory.
 * @b: size of memory to be allocated.
 * Return: pointer to the allocated memory.
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
