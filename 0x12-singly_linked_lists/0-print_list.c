#include "lists.h"
/**
 *print_list - prints the information inside a list
 *@h: list to print
 *Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
