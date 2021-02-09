  #include "holberton.h"

/**
 * print_last_digit - return the last digit of an integer
 * @n: int to apply
 *
 * Return: last digit (int)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
