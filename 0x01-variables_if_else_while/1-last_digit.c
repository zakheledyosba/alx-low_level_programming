#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - print"the last digit of the number stored in the variable n"
 *
 * Return: 0
 *
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastd = n % 10;

	if (lastd > 5)
	
	{

	printf("Last digit of %d is %d and is greater than 5\n", n, last d);

	}

	else if (lastd == 0)

	{

	printf("last digit of %d is %d and is 0\n", n, lastd);

	}
	
	else if (lastd < 6 && lastd !=0)
	
	{

	printf ("Last digit of %d and is less than 6 and not 0\n", n, lastd);

	}

	return (0);

}
