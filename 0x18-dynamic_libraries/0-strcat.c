#include "main.h"


/**
 * _strcat - "concatenates two strings
 * @dest: input value
 * @src: input value"
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
