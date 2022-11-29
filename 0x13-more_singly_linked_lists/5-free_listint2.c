#include "lists.h"
/**
 *free_listint2 - free list and sets head to null
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
void free_listint2(listint_t **head)
{
	void *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
