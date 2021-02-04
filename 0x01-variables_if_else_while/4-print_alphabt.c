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
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	} while (letter != 'z');
	putchar(letter);
	putchar('\n');

return (0);
}
