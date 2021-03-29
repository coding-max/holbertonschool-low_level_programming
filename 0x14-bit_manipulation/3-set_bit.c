#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | aux;
	return (1);
}
