#include "lists.h"
/**
 * sum_dlistint - sums all elements in a list
 * @head: header of double linked list
 * Return: sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int acum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)/*check start of list*/
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		acum = acum + head->n;
		head = head->next;
	}
	return (acum);
}

