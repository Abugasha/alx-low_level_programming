	#include "lists.h"
dlistint_t *ad_node(const int n, dlistint_t *next, dlistint_t *prev);
/**
 * insert_dnodeint_at_index - insert a node at given index
 * @h: header of double linked list
 * @idx: index to insert the node
 * @n: int data to insert
 * Return: size of the printed double list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL;
	void *init_value;

	if (h == NULL)
		return (NULL);
	if ((*h) == NULL && idx == 0)
		return (add_dnodeint(h, n));
	else if (*h == NULL)
		return (NULL);
	while ((*h)->prev != NULL)/*check start of list*/
	{
		(*h) = (*h)->prev;
	}
	init_value = *h;
	for (i = 0; (*h) != NULL; i++)
	{
		if (idx == i)
			break;
		(*h) = (*h)->next;
	}
	if (idx == i && *h == NULL)
	{
		(*h) = init_value;
		return (add_dnodeint_end(h, n));
	}
	if (*h == NULL)
	{
		(*h) = init_value;
		return (NULL);
	}
	new_node = ad_node(n, (*h), (*h)->prev);
	if ((*h)->prev != NULL)
		(*h)->prev->next = new_node;
	(*h)->prev = new_node;
	while ((*h)->prev != NULL)/*check start of list*/
		(*h) = (*h)->prev;
	return (new_node);
}
/**
 * ad_node - creates a new node
 * @n: data for the new node
 * @next: struct next address position
 * @prev: struct prev address position
 * Return: pointer to the new node
 */
dlistint_t *ad_node(const int n, dlistint_t *next, dlistint_t *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = prev;
	new_node->n = n;
	new_node->next = next;
	return (new_node);
}


