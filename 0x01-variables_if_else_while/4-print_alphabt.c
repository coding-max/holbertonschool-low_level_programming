#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter != '{'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');

return (0);
}
