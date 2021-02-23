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
	int i = 0, j = 0, exit;
	char *ptr;

here_i_go_again:j = 0;
	exit = 0;
	for (; (haystack[i] != '\0'); i++)
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];
			break;
		}
	if (haystack[i] == '\0')
	{
		return ('\0');
	}
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
	if (needle[j] == '\0' && !exit)
	{
		return (ptr);
	}
	if (haystack[i] == '\0')
		return (0);
	goto here_i_go_again;
	return (ptr);
}
