#include "3-calc.h"


/**
 * op_add - adition
 * @a: a
 * @b: b
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtraction
 * @a: a
 * @b: b
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplication
 * @a: a
 * @b: b
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - division
 * @a: a
 * @b: b
 * Return: (b != 0) ? a/b : Error
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - module
 * @a: a
 * @b: b
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
