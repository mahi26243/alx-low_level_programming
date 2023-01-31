#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the address of the head of the list.
 *
 * Return: a pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nhead, *bond;

	if (head == NULL || *head == NULL)
		return (NULL);

	bond = NULL;

	while ((*head)->next != NULL)
	{
		nhead = (*head)->next;
		(*head)->next = bond;
		bond = *head;
		*head = nhead;
	}

	(*head)->next = bond;

	return (*head);
}
