#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
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
		if ((separator != NULL) && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
