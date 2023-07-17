#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - "duplicate to new memory space location
 * @str: char"
 * Return: 0
 */

char *_strdup(char *str)
{

	char *ptstr;

	int i;

	int n = 0;

	while (str[n] != '\0')

	{

		n++;

	}

	ptstr = malloc((n * sizeof(char)) + 1);

	if (ptstr == NULL)

	{

		return (NULL);

	}

	for (i = 0;str[i] != '\0';  i++)

	{

		ptstr[i] = str[i];

	}

	return (ptstr);

}