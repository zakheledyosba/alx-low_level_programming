#include "lists.h"


/**
 * print_list - "function that prints all the elements of a list_t list.
 * @h: This take the value of the single list"
 * Return: Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)

{

	unsigned int x = 0;

	if (h == NULL)

		return (0);

	while (h != NULL)

	{

		if (h->str == NULL)

			printf("[%u] (nil)\n", h->len);

		else
			printf("[%u] %s\n", h->len, h->str);

		x += 1;

		h = h->next;

	}

	return (x);

}
