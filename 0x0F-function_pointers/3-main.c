#include "3-calc.h"

/**
 * main - performs simple math operations.
 * @argc: argument count
 * @argv: argument vector
 * Return: return
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
