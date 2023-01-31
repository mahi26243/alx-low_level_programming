#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of nodes in a looped listint_t.
 * @head: a pointer to the head of the listint_t to check.
 *
 * Return: if the lst is not looped - 0.
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *flow, *lost;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	flow = head->next;
	lost = (head->next)->next;

	while (lost)
	{
		if (flow == lost)
		{
			flow = head;
			while (flow != lost)
			{
				nodes++;
				flow = flow->next;
				lost = lost->next;
			}

			flow = flow->next;
			while (flow != lost)
			{
				nodes++;
				flow = flow->next;
			}

			return (nodes);
		}

		flow = flow->next;
		lost = (lost->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the listint_t list.
 *
 * Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
