#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: pointer to the head node of the list
 *
 * Return: the data of the head node that was deleted, or 0 if the
 *         list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL) /* if the list is empty */
		return (0);

		temp = *head; /* save the head node */
		*head = (*head)->next; /* make the next node the new head */
		n = temp->n; /* save the data of the old head */
		free(temp); /* free the old head node */
	return (n);
}

