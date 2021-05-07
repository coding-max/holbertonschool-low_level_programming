#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string.
 * @accept: constant bytes.
 *
 * Return: idk.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, cond = 0;
	char *ptr;

	for (i = 0; (s[i] != '\0'); i++)
	{
		for (j = 0; (accept[j] != '\0'); j++)
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				cond = 1;
				break;
			}
		if (cond)
			break;
	}
	if (cond)
		return (ptr);
	else
		return ('\0');

}
