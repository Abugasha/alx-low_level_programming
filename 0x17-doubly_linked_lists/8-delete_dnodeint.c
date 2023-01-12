#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: header of double linked list
 * @index: index to delete the node
 * Return: 1 if success -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	void *init_value;

	if (head == NULL)
		return (-1);
	if (((*head) == NULL && index == 0) || (*head == NULL))
		return (-1);
	while ((*head)->prev != NULL)/*check start of list*/
	{
		(*head) = (*head)->prev;
	}
	init_value = *head;
	for (i = 0; (*head) != NULL; i++)
	{
		if (index == i)
			break;
		(*head) = (*head)->next;
	}
	if (*head == NULL)
	{
		(*head) = init_value;
		return (-1);
	}
	if ((*head)->prev != NULL)
	{
		(*head)->prev->next = (*head)->next;
		if ((*head)->next != NULL)
			(*head)->next->prev = (*head)->prev;
		free(*head);
	}
	else /*start of the list*/
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(init_value);
		return (1);
	}
	(*head) = init_value;
	return (1);
}

