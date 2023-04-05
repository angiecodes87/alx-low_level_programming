#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: double pointer to the head node of the list
 *
 * Return: the data stored in the head node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

