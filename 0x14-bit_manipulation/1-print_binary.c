#include "main.h"


/**
 * print_binary -"prints the binary equivalent of a decimal number
 * @n - number to print in binary"
 */

void print_binary(unsigned long int n)
{
	int x;
       	int num = 0;
	unsigned long int current;

	for (i = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
