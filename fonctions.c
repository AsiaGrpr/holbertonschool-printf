#include "main.h"
#include <unistd.h>

/**
 * _strlen - function to know the length of a string
 * @s: pointer to string to mesure
 *
 * Return: Length value
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}


/**
 * print_char - function that stdout a char
 * @all: va_list used as input
 *
 * Return: length value
*/
int print_char(va_list all)
{
	int c = va_arg(all, int);

	return (write(1, &c, 1));
}

/**
 * print_string -  function that stdout a string
 * @all: va_list used as input
 *
 * Return: length value
*/
int print_string(va_list all)
{
	char *s = va_arg(all, char *);

  	if (s == NULL)
		return (0);

	return (write(1, s, _strlen(s)));
}

/**
 * print_percent - function that stdout % symbol
 * @all: va_list used as input
 * 
 * Return: Length value
*/
int print_percent(va_list all)
{
	void(va_list);
	write(1, "%", 1);
	return (1);
}