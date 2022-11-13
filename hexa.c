#include "main.h"
#include <stdarg.h>

/**
 * hexadecimal - function that convert ascii value
 *		to hexadecimal value
 * @c: character to print
 * Return: number of characters printed
 */
int hexadecimal(char c)
{
	int i = 0;
	int temp;
	char hexa;

	while (c != '0')
	{
		temp = c % 16;
		if (temp < 10)
		{
			hexa = temp + 48;
			_putchar(hexa + '0');
			i++;
		}
		else
		{
			hexa = temp + 55;
			_putchar(hexa + '0');
			i++;
		}
		c = c / 16;
	}
	return (i);
}


/**
 * print_hexadecimal - function that print strings and
 *					non printable characters are printed
 * @all: string to print
 *
 * Return: number of character printed
 */

int print_hexadecimal(va_list all)
{
	char *s = va_arg(all, char *);
	int i = 0;
	int counter = 0;

	for (; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			counter += _putchar('\\');
			counter += _putchar('x');
			counter += hexadecimal(str[i]);
		}
		else
		{
			counter += _putchar(s[i]);
		}
	}
	return (counter);
}
