#include "holberton.h"
#include <stdbool.h>

/**
 * print_sign - checks the sign of an int number
 * @n: int to check
 *
 * Return: 1 (n>0), 0 (n=0) and -1 (n<0)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
