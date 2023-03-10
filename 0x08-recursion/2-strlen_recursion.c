#include "main.h"
/**
 * _strlen_recursion - Cal. the len of a str
 * @s: input
 *
 * Return: integer valur
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
