#include "main.h"
#include <stdlib.h>


/**
 * argstostr -"main entry
 * @ac: int input
 * @av: double pointer array"
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int x, n, v = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		str[v] = av[x][n];
		v++;
	}
	if (str[v] == '\0')
	{
		str[v++] = '\n';
	}
	}
	return (str);
}
