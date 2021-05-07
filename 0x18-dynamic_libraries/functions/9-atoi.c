#include "holberton.h"

/**
 * _atoi - converts string to int
 * @s: input string
 * Return: converted int
 */
int _atoi(char *s)
{
	int loop = 0, neg = 1, number = 0;

	if (s[0] == '-')
	{
		neg *= -1;
		loop++;
	}
	for (; s[loop] != '\0'; loop++)
		number = number * 10 + s[loop] - '0';
	number *= neg;
	return (number);
}
