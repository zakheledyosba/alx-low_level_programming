#include "main.h"
#include <stdio.h>

/*
 * binary_to_uint -"converts a binary number to an unsigned int
 * @*b - is pointing to a string of 0 and 1 chars"
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
	conv_num = (conv_num << 1) | (*b - '0');
	*b++;
	}
	return (conv_num);
}
