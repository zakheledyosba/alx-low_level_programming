#include <stdio.h>
#include <stdlib.h>


/**
 * main - "Write a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments"
 * Return: always 0
 *
 */

int main(int argc, char *argv[])

{

	int mult = 0;

	char c[] = "Error";

	if (argc < 2)

	{

		printf("%s\n", c);

		return (1);

	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", mult);

	return (0);

}
