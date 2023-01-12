#include "lists.h"
dlistint_t *add_node(const int n, dlistint_t *next, dlistint_t *prev);
/**
 * add_dnodeint - adds node in the end in a double linked list
 * @head: header of double linked list
 * @n: data for the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = add_node(n, (*head), NULL);
	if (new_node == NULL)
		return (NULL);
	if ((*head) == NULL)
		(*head) = new_node;
	else
	{
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	return (new_node);
}
/**
 * add_node - creates a new node
 * @n: data for the new node
 * @next: struct next address position
 * @prev: struct prev address position
 * Return: pointer to the new node
 */
dlistint_t *add_node(const int n, dlistint_t *next, dlistint_t *prev)
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

