#ifndef VARDIAC_FUNCTIONS
#define VARDIAC_FUNCTIONS
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - struct for task 3.
 * @format_in: id of format
 * @function: pointer to function that print with @format_in
 **/
typedef struct format
{
	char format_in;
	void (*function)(va_list);
} format_t;

#endif
