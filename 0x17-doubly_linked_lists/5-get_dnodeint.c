#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: header of double linked list
 * @index: index to retrieve the node
 * Return: size of the printed double list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)/*check start of list*/
	{
		head = head->prev;
	}
	for (i = 0; head != NULL; i++)
	{
		if (index == i)
			break;
		head = head->next;
	}
	if (index > i)
		return (NULL);
	return (head);
}

