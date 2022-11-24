#include "lists.h"
/**
 *list_len - gives the length of a list
 *@h: pointer to the first node
 *Return: lenght of the list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
