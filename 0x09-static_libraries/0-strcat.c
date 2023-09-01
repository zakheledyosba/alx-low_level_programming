#include "main.h"


/**
 * _strcat - "concatenates two strings
 * @dest: input value
 * @src: input value"
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
	int x;
	int b;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[x] = src[b];
		x++;
		b++;
	}

	dest[x] = '\0';
	return (dest);
}
