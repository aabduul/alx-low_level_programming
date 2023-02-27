#include "main.h"

/**
 * print_rev - Reverses a str
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] 1 = '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
