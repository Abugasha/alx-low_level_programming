#include "lists.h"
/**
 *pop_listint - free list  and sets head to null
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
int pop_listint(listint_t **head)
{
	int n;
	void *tmp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
