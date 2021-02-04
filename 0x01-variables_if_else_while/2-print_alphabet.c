#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter != 'z');
	putchar(letter);

return (0);
}
