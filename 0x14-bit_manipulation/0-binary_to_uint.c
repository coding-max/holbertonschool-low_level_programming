#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number (sucess), or 0 (error).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int power = 1;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += power;
		i--;
		power += power;
	}
	return (sum);
}
