#include "main.h"


/**
 * _strncpy -"copy a string
 * @dest: input value
 * @src: input value
 * @n: input value"
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
