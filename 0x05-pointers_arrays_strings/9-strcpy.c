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

	while (*(src + l) != '\0')
	{
		*(dest + l) = *src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);
}
