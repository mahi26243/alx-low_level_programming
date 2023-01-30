#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a pointer to the head of the listint_t list.
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *los;

	if (head == NULL)
		return;

	while(*head)
	{
		los = (*head)->next;
		free(*head);
		*head = los;
	}

	head = NULL;
}
