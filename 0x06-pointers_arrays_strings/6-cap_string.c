#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: string.
 *
 * Return: string in uppercase.
 */
char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == '\t')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
