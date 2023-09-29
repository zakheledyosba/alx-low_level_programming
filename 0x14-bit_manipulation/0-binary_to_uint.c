#include "main.h"
#include <stddef.h>


/*
 * binary_to_uint -"converts a binary number to an unsigned int
 * @*b - is pointing to a string of 0 and 1 chars"
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	int x;

	if (!b)
		return (0);

	for (x = 0 ; b[x]; x++)
	{
		if (b[x] < '0' && b[x] > '1')
			return (0);
	conv_num = 2 * conv_num + (b[x] - '0');
	}
	return (conv_num);
}
