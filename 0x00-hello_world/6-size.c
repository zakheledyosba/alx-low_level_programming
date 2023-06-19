#include <stdio.h>


/**
 * main  - "prints the size of various types on the computer
 * it is compiled and run on."
 * Return: 0
 */

int main(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char));

	printf("size of an int: %zu byte(s)\n", sizeof(int));

	printf("sze of a long: %zu byte(s)\n", sizeof(long));

	printf("size of a float: %zu byte(s)\n", sizeof(float));

	printf("size of a long long:%zu byte(s)\n", sizeof(long long));

	return (0);


}
