#include "main.h"

/**
 * print_rev - Reverses a str
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int n;

	while (*s != '\0')
	{	i++;
		s++;
	}
	s--;
	for (n = i; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
