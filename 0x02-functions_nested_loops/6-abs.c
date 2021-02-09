#include "holberton.h"

/**
 * _abs - return the absolute value of an integer
 * @n: int to apply _abs
 *
 * Return: absolut value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
