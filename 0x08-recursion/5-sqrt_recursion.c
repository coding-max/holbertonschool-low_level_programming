#include "holberton.h"

/**
 * sqrt_aux - auxiliar function (recursive).
 * @n: number.
 * @root: possible root of @n.
 * @X2root: aux variable.
 *
 * Return: 1 or 0.
 */
int sqrt_aux(int n, int root, int X2root)
{
	if (n == X2root)
		return (root);
	if (n > X2root)
	{
		root++;
		return (sqrt_aux(n, root, root * root));
	}
	return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:  number.
 *
 * Return: root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_aux(n, 0, 0));
}
