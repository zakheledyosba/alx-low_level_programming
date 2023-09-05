#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * _strdup -"duplicate to new memory space location
 * @str: char"
 * Return: 0
 */

char *_strdup(char *str)

{
	char *x;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
	x[r] = str[r];

	return (x);
}
