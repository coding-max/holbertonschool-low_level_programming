#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	long int original_number = 612852475143;
	long int number = original_number;
	long int prime = 2;

	while (number != prime)
	{
		while ((number % prime) == 0)
			number = (number / prime);
		prime++;
	}
	printf("%ld\n", number);
	return (0);
}
