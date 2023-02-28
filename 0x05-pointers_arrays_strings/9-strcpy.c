#include "main.h"

/**
 * _strcpy - Copies the str pointed to by src
 * @dest: copy dest
 * @src: copy source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\';
	return (dest);
}
