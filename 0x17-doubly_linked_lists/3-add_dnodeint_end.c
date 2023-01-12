#include "lists.h"
dlistint_t *add_node1(const int n, dlistint_t *next, dlistint_t *prev);
/**
 * add_dnodeint_end - adds node in the end in a double linked list
 * @head: header of double linked list
 * @n: data for the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new_node = add_node1(n, NULL, NULL);
		if (new_node == NULL)
			return (NULL);
		(*head) = new_node;
	}
	else
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		new_node = add_node1(n, NULL, (*head));
		if (new_node == NULL)
			return (NULL);
		(*head)->next = new_node;
	}
	while ((*head)->prev != NULL)/*check start of list*/
		(*head) = (*head)->prev;
	return (new_node);
}
/**
 * add_node1 - creates a new node
 * @n: data for the new node
 * @next: struct next address position
 * @prev: struct prev address position
 * Return: pointer to the new node
 */
dlistint_t *add_node1(const int n, dlistint_t *next, dlistint_t *prev)
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

