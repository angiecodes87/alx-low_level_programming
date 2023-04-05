#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the beginning of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

		prev_node = *head;
		current_node = prev_node->next;
	for (i = 1; current_node != NULL && i < index; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}

