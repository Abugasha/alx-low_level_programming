#include "lists.h"
/**
 *print_listint_safe - prints a list that contains ints
 *@head: pointer to the first elements of the list
 *Return: Quantity of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	const listint_t *temp;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		temp = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			i++;
			break;
		}

	}
	return (i);
}
