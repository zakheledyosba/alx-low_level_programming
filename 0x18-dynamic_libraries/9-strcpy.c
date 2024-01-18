#include "main.h"


/**
 * char *_strcpy -" a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from"
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{

	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
