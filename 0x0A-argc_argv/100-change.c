#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, sum = 0;
	int a[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		i = 0;
		while (c < a[i])
			i++;
		sum = sum + (c / a[i]);
		c = c % a[i];
	}
	printf("%d\n", sum);
	return (0);
}
