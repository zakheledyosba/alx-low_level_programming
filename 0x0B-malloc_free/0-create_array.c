#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - "function that creates an array of chars, and initializes it
 *                with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character"
 *
 * Return: An Array Initialized with the specific char
 */

char *create_array(unsigned int size, char c)

{

	unsigned int a;

	char *s;

	s = malloc((size) * sizeof(char));

	if (s == NULL)
	{

		return (NULL);

	}

	a = 0;

	while (a < size)

	{

		s[a] = c;
		a++;

	}

	return (s);

}
