#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * with values from min (included) to max (included).
 * @min: start value.
 * @max: final value.
 * Return: pointer to the array.
 **/
int *array_range(int min, int max)
{
	int i, length, *arr;

	if (min > max)
		return (NULL);
	length = max - min + 1;

	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);

	for (i = 0; (i + min) <= max; i++)
		arr[i] = i + min;
	return (arr);
}
