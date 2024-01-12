#include "lists.h"


/**
* add_dnodeint -"function
* @head: double pointer to first node
* @n: new node data to add"
*
* Return: Address of new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;
	if (h != NULL)
		h->prev = new;

	*head = new;
	return (new);

}
