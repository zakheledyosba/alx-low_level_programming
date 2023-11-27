#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0
 */

int get_endianness(void)

{
	unsigned int i;
	char *b;

	i = 1;
	b = (char *) &i;

	return ((int)*b);
}
