#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * compare - auxiliar function (recursive).
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: 1 or 0.
 */
int compare(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == 0 && *s2 == '*')
		return (compare(s1, s2 + 1));
	if (*s1 == 0 || *s2 == 0)
		return (0);
	if (*s1 == *s2)
		return (compare(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (compare(s1, (s2 + 1)));
		if (compare(s1, s2 + 1) == 1)
			return (1);
		return (compare(s1 + 1, s2));
	}
	return (0);
}


/**
 * wildcmp - compares two strings.
 * returns 1 if the strings can be considered identical, otherwise return 0.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: 1 or 0.
 */
int wildcmp(char *s1, char *s2)
{
	int s1_length = _strlen_recursion(s1);
	int s2_length = _strlen_recursion(s2);

	if (s1_length != s2_length)
		return (0);
	return (compare(s1, s2));
}
