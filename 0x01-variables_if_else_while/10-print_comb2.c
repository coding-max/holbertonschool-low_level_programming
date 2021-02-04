#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, cont;

	cont = 0;
	for (i = 48; i != 58; i++)
	{
		for (j = 48; j != 58; j++)
		{
			putchar(i);
			putchar(j);
			if (cont != 99)
			{
				putchar(44);
				putchar(32);
			}
			cont++;
		}
	}
	putchar('\n');
return (0);
}
