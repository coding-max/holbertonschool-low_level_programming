#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower != '{'; lower++)
		putchar(lower);

	for (upper = 'A'; upper != '['; upper++)
		putchar(upper);

	putchar('\n');

return (0);
}
