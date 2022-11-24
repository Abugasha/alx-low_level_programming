 #include "lists.h"
/**
 *add_node - adds new node at end of list
 *@head: pointer to the pointer of the list
 *@str: str data to add
 *Return: pointer to the new element of list
 */
list_t *add_node(list_t **head, const char *str)
{
	int len_str = 0;
	list_t *new_node;
	char *final = NULL;

	if (head == NULL)
		return (NULL);
	if (str != NULL)
	{
		final = strdup(str);
		if (final == NULL)
			return (NULL);
		while (final[len_str])
			len_str++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = final;
	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
