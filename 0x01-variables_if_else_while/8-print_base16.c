#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 48; digit != 58; digit++)
		putchar(digit);
	for (digit = 97; digit != 103; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
