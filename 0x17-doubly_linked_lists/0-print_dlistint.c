#include "lists.h"

/**
 * print_dlistint -" function
 * @h: string to print"
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}
	return (element);
}
