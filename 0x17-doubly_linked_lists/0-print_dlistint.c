#include "lists.h"
/**
 * print_dlistint - prints a double linked list
 * @h: header of double linked list
 * Return: size of the printed double list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)/*check start of list*/
	{
		h = h->prev;
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

