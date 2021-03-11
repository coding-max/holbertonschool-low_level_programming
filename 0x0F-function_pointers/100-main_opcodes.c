#include "function_pointers.h"

/**
 * print_aux - aux function for print opcodes
 * @s: main function's adress
 * @x: bytes to print
 **/
void print_aux(char *s, int x)
{
	int i = 0;

	for (; i < x; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < x - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of his function
 * @argc: argument count
 * @argv: argument vector
 * Return: O (success).
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_aux((char *)&main, atoi(argv[1]));
	return (0);
}
