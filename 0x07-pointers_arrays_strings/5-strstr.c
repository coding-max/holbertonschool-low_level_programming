#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of the located substring.
 * NULL in other case.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, exit = 0;
	char *ptr;

	for (i = 0; (haystack[i] != '\0'); i++)
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];
			break;
		}
	if (haystack[i] == '\0')
	{
		return ('\0');
	}
	else
	{
		while ((haystack[i] != '\0') && (needle[j] != '\0'))
		{
			if (haystack[i] != needle[j])
			{
				exit = 1;
				break;
			}
			i++;
			j++;
		}
		if (exit || (needle[j] != '\0' && haystack[i] == '\0'))
			return ('\0');
		else
			return (ptr);
	}
}
