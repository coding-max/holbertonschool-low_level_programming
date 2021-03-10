#include "function_pointers.h"

/**
 * print_name - calls another function to prints a name.
 * @name: string to print.
 * @f: function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
