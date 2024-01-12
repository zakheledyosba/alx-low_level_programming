#include "lists.h"


/**
* insert_dnodeint_at_index -" function
* @h: double pointer to first node of dbl lnkd list
* @idx: index to where new node is added
* @n: data of new node"
* Return: Address of new node or NULL if fail.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int o;

	new = NULL;

	if (idx == 0)
	new = add_dnodeint(h, n);
	else
	{
		head = *h;
		o = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (o == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			o++;
		}
	}

	return (new);
}
