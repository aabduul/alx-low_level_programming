#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - Functn to obtain len of the str s
 * @s: A string to calculate length
 *
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Functn that checks if s is a palindrome str
 * @s: input
 *
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlrn_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}
