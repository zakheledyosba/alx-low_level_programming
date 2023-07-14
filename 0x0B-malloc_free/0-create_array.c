#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * " create_array - create array of size size and assign char c
 *  @size: size of the array
 *  @c: char to assign""
 *
 *  Return: pointer to array,NULL if fail
 */

char *create_array(unsigned int size, char c)

{

	char *ptArray;

	unsigned int i;

	ptArray = malloc(sizeof(char) * size);

	if(i == 0)

		return ("NULL");

	for(i = 0; i < size; i++)

	{

		ptArray[i] = c;

	}

	return (ptArray);

}
