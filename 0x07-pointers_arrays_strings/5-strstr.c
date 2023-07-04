# include "main.h"


/*
 * _strstr - locates a substring
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to start of needle
 * in haystack
 */

char *_strstr(char *haystack, char *needle)

{
	char *occurance, *temNeedle;

	if (!*needle)

		return  (haystack);

	while (*haystack)
	
	{
		
		if (*haystack == *needle)

		{

			occurance = haystack;

			tempNeedle = needle;

			while (*tempNeedle)

			{

				if (*haystack++ != *tempNeedle++)

				{

					haystack = occurance;

					break;

				}

			}

		}

		haystack++;

	}

	return (0);

}
