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
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
