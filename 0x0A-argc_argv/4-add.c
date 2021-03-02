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
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
