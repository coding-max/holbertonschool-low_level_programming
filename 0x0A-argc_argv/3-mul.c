#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
