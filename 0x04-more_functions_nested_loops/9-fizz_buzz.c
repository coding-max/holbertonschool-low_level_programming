#include <stdio.h>
#include "holberton.h"

/**
 * main - print thr numbers drom 1 to 100, followed by a new line.
 * for multiples of 3 print Fizz insted the number.
 * for multiples of 5 print Buzz insted the number.
 * for multiples of 3 and 5 print FizzBuzz insted the number.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%i", i);
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
