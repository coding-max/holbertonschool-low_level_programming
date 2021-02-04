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

	do {
		putchar(lower);
		lower++;
	} while (lower != 'z');
	putchar(lower);

	do {
		putchar(upper);
		upper++;
	} while (upper != 'Z');
	putchar(upper);

	putchar('\n');

return (0);
}
