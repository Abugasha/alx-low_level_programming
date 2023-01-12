#include "lists.h"
/**
 * dlistint_len - gets lenght of double linked list
 * @h: header of double linked list
 * Return: size of the printed double list
 */
size_t dlistint_len(const dlistint_t *h)
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
		h = h->next;
	}
	return (i);
}

