#include "main.h"

/**
 * _puts - A function that prints a string, followed by a \n, to stdout
 * * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
