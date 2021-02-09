#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int base, mult, n, decena, unidad;

	for (base = 0; base < 10; base++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			n = base * mult;
			if (n < 10 && mult != 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			} else if (n < 10 && mult == 0)
				_putchar(n + '0');
			else
			{
				decena = (n / 10);
				unidad = (n % 10);
				_putchar(decena + '0');
				_putchar(unidad + '0');
			}
			if (mult < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
