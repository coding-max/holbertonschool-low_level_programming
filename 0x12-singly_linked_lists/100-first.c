#include <stdlib.h>
#include <stdio.h>

/**
 * first - prints before main
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
