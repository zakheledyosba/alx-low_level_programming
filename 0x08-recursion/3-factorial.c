#include "main.h"


/*
 * factorial -" returns the factorial of a given number
 * @n: the number to find the factorials of"
 *
 * Return: the factorial of @n
 */

int factorial(int n);

{
	if (n == 0 || n == 1)

		return(1);
	
	else if (n < 0)

		return(-1);

	return (n * factiorial(n-1));

}