#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments recived.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
