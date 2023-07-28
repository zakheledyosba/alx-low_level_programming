#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - "function that returns the number of elements in a linked list_t
 *            list.
 * @h: This is the sigle list"
 *
 * Return: The number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)

{
	int x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)

	{
		x += 1;
		h = h->next;
	}

	return (x);

}
