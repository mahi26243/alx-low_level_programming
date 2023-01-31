#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: a pointer to the addressof the head of the listint_t list.
 * @index: ndex of the node that should be deleted.
 *
 * Return: on success - 1
 *         on failure - -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tot, *cut = *head;
	unsigned int node;

	if (cut == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cut);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cut->next == NULL)
			return (-1);

		cut = cut->next;
	}

	tot = cut->next;
	cut->next = tot->next;
	free(tot);
	return (1);
}
