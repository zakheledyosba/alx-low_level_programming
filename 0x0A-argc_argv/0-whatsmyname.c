#include "stdio.h"


/*
 * main - "program that prints its name , followed by a new line"
 * @argc : number of argurments
 * @argv ; array wiyh the arguments
 *
 * Return : always 0
 */

int main(int argc, char *argv[])

{
        (void)argc;

        printf("%s\n", argv[0]);
        
	return (0);

}
