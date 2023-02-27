#include "main.h"

/**
 * rev_string - Reverse a str
 * @s: rev_str
 * Return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int revstr = 0;
	int i;

	while (s[revstr] != '\0')
		revstr++;
	for (i = 0; i < revstr; i++)
	{
		revstr--;
		rev = s[i];
		s[i] = s[revstr];
		s[revstr] = rev;
	}
}
