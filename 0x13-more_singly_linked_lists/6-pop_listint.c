#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to the head of the listint_t list.
 *
 * Return: if the linked list is empty - 0.
*/
int pop_listint(listint_t **head)
{
	listint_t *mmy;
	int set;

	if (*head == NULL)
		return (0);

	mmy = *head;
	set = (*head)->n;
	*head = (*head)->next;

	free(mmy);

	return (set);
}
