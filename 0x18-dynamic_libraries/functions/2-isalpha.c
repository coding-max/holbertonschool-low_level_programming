#include "holberton.h"
#include <stdbool.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: letter to check
 *
 * Return: 1 (alphabetic), 0 (non alphabetic)
 */
int _isalpha(int c)
{
	bool cond = false;
	char i = 'a';

	while (!cond && i <= 'z')
	{
		if (c == i)
			cond = true;
		i++;
	}
	i = 'A';
	while (!cond && i <= 'Z')
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
