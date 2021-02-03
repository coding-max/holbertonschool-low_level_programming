#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: ", sizeof(c), " byte(s)\n");
printf("Size of a int: ", sizeof(i), " byte(s)\n");
printf("Size of a long int: ", sizeof(li), " byte(s)\n");
printf("Size of a long long int: ", sizeof(lli), " byte(s)\n");
printf("Size of a float: ", sizeof(f), " byte(s)\n");

return (0);
}
