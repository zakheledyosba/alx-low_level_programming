#include "main.h"
#include <stdio.h>

/**
 * _strstr -" Entry point
 * @haystack: input
 * @needle: input"
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)

	{
		char *x = haystack;
		char *z = needle;

		while (*x == *z && *z != '\0')
		{
			x++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}

	return (0);
}
