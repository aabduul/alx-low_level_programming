#include "main.h"

/**
 * _strcpy - Copies the str pointed to by src
 * @dest: cp dest
 * @src: cp source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int n = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; n < l ; n++)
	{
		dest[n] = src[n];
	}
	dest[l] = '\0';
	return (dest);
}
