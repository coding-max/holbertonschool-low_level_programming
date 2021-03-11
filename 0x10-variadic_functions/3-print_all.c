#include "variadic_functions.h"

void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);

/**
 * print_all - prints anything.
 * @format: list of types arguments.
 **/
void print_all(const char * const format, ...)
{
	format_t str_arr[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', '\0'}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (str_arr[j].format_in != '\0')
		{
			if (str_arr[j].format_in == format[i])
			{
				printf("%s", separator);
				str_arr[j].function(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

/**
 * print_c - print with format char.
 * @c: char to print.
 **/
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - print with format int.
 * @i: int to print.
 **/
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - print with format float.
 * @f: float to print.
 **/
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - print with format string.
 * @s: string to print.
 **/
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
