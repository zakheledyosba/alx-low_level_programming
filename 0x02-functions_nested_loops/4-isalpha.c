#include "main.h"


/**
 * main - Write a function that checks for alphabetic character. 
 * @c: is the char to be checked
 * Return: 0
 */

int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
