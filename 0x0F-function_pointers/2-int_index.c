#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: array's address.
 * @size: array's size.
 * @cmp: function's addres.
 * Return: position in the array where the intager isn't 0.
 * if cmp or array is NULL, or size < 1, returns -1.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
