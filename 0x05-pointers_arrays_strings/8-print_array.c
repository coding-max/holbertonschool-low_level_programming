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

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i != 0)
		printf("%d", a[i]);
	printf("\n");
}
