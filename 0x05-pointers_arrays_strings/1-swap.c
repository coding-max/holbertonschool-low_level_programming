#include "holberton.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: pointer 1.
 * @b: pointer 2.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
