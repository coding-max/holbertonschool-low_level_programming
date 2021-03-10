#include "function_pointers.h"

/**
 * array_iterator - Executes another function on each element of an array.
 * @array: array's address.
 * @size: array's size.
 * @action: function's address.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
		while (i < size)
			action(array[i++]);
}
