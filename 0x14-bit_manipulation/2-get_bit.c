#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n & 1);
}
