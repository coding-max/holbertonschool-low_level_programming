#include "holberton.h"
#include <stdbool.h>

/**
 * _islower - checks for lowercase character
 * @c: letter to check
 *
 * Return: 1 (lowercase), 0 (no lowercase)
 */
int _islower(int c)
{
	bool cond = false;
	char i = 'a';

	while (!cond && i <= 'z')
	{
		if (c == i)
			cond = true;
		i++;
	}
	if (cond)
		return (1);
	else
		return (0);
}
