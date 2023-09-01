#include "main.h"


/**
 * _strncat - "concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value"
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int x;
	int b;


	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[x] = src[b];
	x++;
	b++;
	}
	dest[x] = '\0';
	return (dest);
}
