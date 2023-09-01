#include "main.h"


/**
 * _strcmp - "compare string values
 * @s1: input value
 * @s2: input value"
 * Return: s1[x] - s2x[x]
 */

int _strcmp(char *s1, char *s2)

{
	int i = 0, p = 0;

	while (p == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		p = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (p);
}
