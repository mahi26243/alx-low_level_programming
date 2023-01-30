#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a ponter to the head of listint_t list to be freed.
*/
void free_listint(listint_t *head)
{
	listint_t *tot;

	while (head)
	{
		tot = head->next;
		free(head);
		head = tot;
	}
}
