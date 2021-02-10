#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i = 1;
	long int i_anterior = 1;
	long int temp;
	int cont = 1;

	printf("%ld, ", i);
	i = 2;
	while (cont < 49)
	{
		printf("%ld, ", i);
		temp = i;
		i = i + i_anterior;
		i_anterior = temp;
		cont++;
	}
	printf("%ld\n", i);
	return (0);
}
