#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: string.
 *
 * Return: string in uppercase.
 */
char *cap_string(char *s)
{
	int i = 0, j, cond;
	char sep[] = " \t\n,;.!?\"(){}";

	if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		s[i] = (s[i] - 32);

	for (cond = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cond = 1;
				break;
			}
		}
		if (cond && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] = (s[i + 1] - 32);
		cond = 0;
	}
	return (s);
}
