#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to the head of the listint_t list.
 * @n: the integer for the new node to contain.
 *
 * Return: if the function fails - NULL.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old, *last;

	old = malloc(sizeof(listint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->next = NULL;

	if (*head == NULL)
		*head = old;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = old;
	}

	return (*head);
}
