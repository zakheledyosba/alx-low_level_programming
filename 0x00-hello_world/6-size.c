#include <stdio.h>


/**
 * main  - "prints the size of various types on the computer it is compiled and run on."
 *
 * Return: 0
 */

int main(void)

{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	
	printf("size of int: %zu byte(s)\n", sizeof(int));
	
	printf("sze of long: %zu byte(s)\n", sizeof(long));
	
	printf("size of float: %zu byte(s)\n", sizeof(float));
       
       	printf("size of long long:%zu byte(s)\n", sizeof(long long));

	return (0);


}
