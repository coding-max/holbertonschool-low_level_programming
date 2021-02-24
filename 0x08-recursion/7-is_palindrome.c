#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * compare - auxiliar function (recursive).
 * @s: string.
 * @start: position in @s to compare.
 * @end: position in @s to compare.
 * @pos: actual positions.
 * @mid: mid position in s array.
 *
 * Return: 1 or 0.
 */
int compare(char *s, int start, int end, int pos, int mid)
{
	if ((s[start] == s[end]) && (pos < mid))
		return (compare(s, start + 1, end - 1, pos + 1, mid));
	else if (pos > mid)
		return (1);
	else
		return (0);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int pos = 0;
	int start = 0;
	int end = _strlen_recursion(s) - 1;
	int mid = _strlen_recursion(s) / 2;

	return (compare(s, start, end, pos, mid));
}
