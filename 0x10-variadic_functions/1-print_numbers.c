#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: Separator between numbers.
 * @n: Number of arguments.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
