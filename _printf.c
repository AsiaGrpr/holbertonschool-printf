#include "main.h"
#include <stdlib.h>

/**
 * get_func - checks format specifier
 * @format: format specifier
 * Return: pointer to function
 */

int (*get_func(const char *format))(va_list)
{
	flag_fn func[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"d", print_decimal},
		{0, NULL}
	};
}

/**
 * _printf - prints anything
 * @format: list of arguments
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list all;
	int i = 0;
	int counter = 0;
	int (*f)(va_list);
	
	if (format[i] == NULL)
		return (0);
	
	va_start(all, format);

	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			_putchar('%');
			i++;


		}
		else 
			i++;
	}

	va_end(all);
	return (counter);
}
