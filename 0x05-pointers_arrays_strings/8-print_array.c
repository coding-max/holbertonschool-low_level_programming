#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers. new line.
 * @a: array.
 * @n: number of elements.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i + 1 < n; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
