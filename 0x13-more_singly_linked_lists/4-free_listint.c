#include "lists.h"
/**
 *free_listint - free list
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
void free_listint(listint_t *head)
{
	void *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
