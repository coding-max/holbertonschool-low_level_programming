#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	x = 48;
	while (x < 56)
	{
		y = x + 1;
		while (y < 57)
		{
			z = y + 1;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
				{
					putchar('\n');
				} else
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
		y++;
		}
	x++;
	}
return (0);
}
