#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	/* your code goes there */
	printf("Last digit of %i is %i", n, last);

	if (last > 5)
	{
		printf(" and is greater than 5\n");
	} else if (last < 6 && last != 0)
	{
		printf(" and is less than 6 and not 0\n");
	} else
	{
		printf(" and is 0\n");
	}
return (0);
}
