#include "holberton.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array.
 * @n: elements of the array.
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = (n - 1), aux;

	for (; i < j; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
