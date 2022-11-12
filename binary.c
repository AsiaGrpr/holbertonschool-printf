#include "main.h"
#include <stdarg.h>

/**
 * binary - function that convert integer to binary
 * @number: number to convert
 * @count: number of character to print
 * Return: number of character printed
 */

int binary(unsigned int number, int count)
{
	while (number >= 1)
		count = binary(number / 2, count + 1);
	_putchar(number % 2 + '0');
	return (count);
}

/**
 * print_binary - function that convert integer to binary
 * @all: number to convert
 *
 * Return: number of character printed
 */

int print_binary(va_list all)
{
	int count = 0;
	unsigned int number = va_arg(all, unsigned int);

	count = binary(number, count);
	return (count);
}
