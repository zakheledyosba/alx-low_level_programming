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

	int str_len = 0;

	while (str[str_len] != "\0")
	{
		str_len++;
	}

	ptstr = malloc((str_len * sizeof(char)) + 1);

	if (str_len == NULL)
	{
		return (NULL);
	}

	int i

	for (i = 0;str[i] != "\0"; i++)
	{
		ptstr[i] = str[i];
	}

	return (ptstr);

}
