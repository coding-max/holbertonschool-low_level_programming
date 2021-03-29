#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;

	/* honestly idk, check: https://stackoverflow.com/questions/12791864 */
	return ((int) (((char *)&x)[0]));
}
