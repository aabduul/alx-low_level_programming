#include "main.h"

/**
 * puts2 - Prints every other char of a str
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *c = str;
	int n;

	while (*c != '\0')
	{
		c++;
		len++;
	}
	i = len - 1;
	for (n = 0; n <= i; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
