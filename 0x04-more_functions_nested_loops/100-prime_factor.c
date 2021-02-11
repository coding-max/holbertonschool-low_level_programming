#include <holberton.h>
#include "holberton.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int original_number = 612852475146;
	int number = original_number;
	int prime = 2;

	while (number != prime)
	{
		while ((number % prime) == 0)
			number = (numer % prime);
		prime++;
	}
	return (prime);
}
